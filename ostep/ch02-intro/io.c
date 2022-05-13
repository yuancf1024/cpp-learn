#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int fd = open("/tmp/file", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    assert(fd > -1);
    // char buffer[20];
    // sprintf(buffer, "hello world\n");
    int rc = write(fd, "hello world\n", 13);
    assert(rc == 13);
    // fsync(fd);
    close(fd);
    return 0;
}
// 生成的文件路径：D:\tmp

// int main(int argc, char *argv[]) {
//     int fd = open("/tmp/file", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
//     assert(fd >= 0);
//     char buffer[20];
//     sprintf(buffer, "hello world\n");
//     int rc = write(fd, buffer, strlen(buffer));
//     assert(rc == (strlen(buffer)));
//     fsync(fd);
//     close(fd);
//     return 0;
// }