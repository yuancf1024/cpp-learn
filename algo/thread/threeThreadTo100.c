#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

#define COUNT 100
static int i = 1;
// 条件变量和锁
pthread_cond_t pA;
pthread_cond_t pB;
pthread_cond_t pC;
pthread_mutex_t mutex;

void* funcA(void *arg) { // 线程tid1执行funA
    while (i <= COUNT) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&pA, &mutex); // 条件变量等待被唤醒
        if (i <= COUNT) { // 防止超过100
            printf("funA : %d\n", i);
            i++;
            pthread_cond_broadcast(&pB); // A执行完后唤醒B
            pthread_mutex_unlock(&mutex); // 解锁
        } else {
            pthread_cond_broadcast(&pB); // 如果超过100，那么只唤醒B，不打印i
            pthread_mutex_unlock(&mutex);
        }
    } 
}

void* funcB(void *arg) { // 线程tid2执行funB
    while (i <= COUNT) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&pB, &mutex); // 条件变量等待被唤醒
        if (i <= COUNT) { // 防止超过100
            printf("funB : %d\n", i);
            i++;
            pthread_cond_broadcast(&pC); // B执行完后唤醒C
            pthread_mutex_unlock(&mutex); // 解锁
        } else {
            pthread_cond_broadcast(&pC); // 如果超过100，那么只唤醒C，不打印i
            pthread_mutex_unlock(&mutex);
            break;
        }
    }
}

void* funcC(void *arg) { // 线程tid3执行funC
    while (i <= COUNT) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&pC, &mutex); // 条件变量等待被唤醒
        if (i <= COUNT) { // 防止超过100
            printf("funC : %d\n", i);
            i++;
            pthread_cond_broadcast(&pA); // C执行完后唤醒A
            pthread_mutex_unlock(&mutex); // 解锁
        } else {
            pthread_cond_broadcast(&pA); // 如果超过100，那么只唤醒A，不打印i
            pthread_mutex_unlock(&mutex);
        }
    }
}

int main() {
    // 初始化条件变量和锁，如果出错就打印"break _"
    if (0 != pthread_cond_init(&pA, NULL)) {
        printf("break a");
    };

    if (0 != pthread_cond_init(&pB, NULL)) {
        printf("break b");
    };

    if (0 != pthread_cond_init(&pC, NULL)) {
        printf("breakc");
    };

    if (0 != pthread_mutex_init(&mutex, NULL)) {
        printf("break m");
    };

    // 创建三个线程
    pthread_t tid1, tid2, tid3;

    pthread_create(&tid1, NULL, funcA, NULL); // 线程tid1执行funcA
    pthread_create(&tid2, NULL, funcB, NULL); // 线程tid2执行funcB
    pthread_create(&tid3, NULL, funcC, NULL); // 线程tid3执行funcC
    pthread_cond_broadcast(&pA); // 唤醒线程A

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_join(tid3, NULL);
    return 0;
}

/*
编译：
gcc -pthread -o to100 threeThreadTo100.c
运行：
./to100

调试：
ps -ef|grep to100 # 使用ps命令找到进程id
$ gdb
(gdb) attach 20829

gdb hello 20829 # 直接调试相关进程

2022-06-26
存在的问题：程序不稳定，有时能按照预期要求打印到100，
有时会在中途死锁卡住。

*/