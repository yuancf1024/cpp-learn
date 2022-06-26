/*bar1.c*/
int x = 15213;
int main() { return 0; }

/*
$ gcc foo2.c bar2.c
/usr/bin/ld: /tmp/cc8ijKbr.o:(.data+0x0): multiple definition of `x'; /tmp/ccbja8dt.o:(.data+0x0): first defined here
/usr/bin/ld: /tmp/cc8ijKbr.o: in function `main':
bar2.c:(.text+0x0): multiple definition of `main'; /tmp/ccbja8dt.o:foo2.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
*/