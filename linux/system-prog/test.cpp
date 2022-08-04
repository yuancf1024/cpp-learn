#include <iostream>

using namespace std;

int main() { 
    cout << "Hello chris" << endl;
    return 0;
}

/*
g++ test.cpp -c -o test.o # 编译汇编 Compile and assemble, but do not link.

readelf --help | head -5 # 查看readelf 文件帮助 显示前5行

yuancf1024@LAPTOP-22O3I9E3:~/cs/cpp-learn/linux/system-prog$ readelf -h test.o
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              REL (Relocatable file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
  Entry point address:               0x0
  Start of program headers:          0 (bytes into file)
  Start of section headers:          1904 (bytes into file)
  Flags:                             0x0
  Size of this header:               64 (bytes)
  Size of program headers:           0 (bytes)
  Number of program headers:         0
  Size of section headers:           64 (bytes)
  Number of section headers:         16
  Section header string table index: 15


*/