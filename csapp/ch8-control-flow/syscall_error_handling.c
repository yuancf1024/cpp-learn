/*调用Unix fork函数时会检查错误*/
if ((pid = fork()) < 0) {
    fprintf(stderr, "fork error: %s\n", strerror(errno));
    exit(0);
}

// 错误报告函数
void unix_error(char *msg) /*Unix-style error*/
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(0);
}

// 给定错误报告函数后，对fork的调用缩减如下
if ((pid = fork()) < 0) {
    unix_error("fork error");
}

// 错误处理包装函数
pid_t Fork(void) { 
    pid_t pid; 

    if ((pid = fork()) < 0)
        unix_error("Fork error");
    return pid;
}

// 对fork的调用缩减为1行
pid = Fork();