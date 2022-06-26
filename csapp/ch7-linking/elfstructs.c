typedef struct {
    int name; // 字符串表中的字节偏移
    char type : 4, binding : 4; // type 要么是数据要么是函数；
    // binding表示符号是本地还是全局
    char reserved;
    short section; // 一个到节头部的索引
    long value; // 符号的地址
    long size; // 目标大小(以字节为单位)
} ELF64_Symbol;