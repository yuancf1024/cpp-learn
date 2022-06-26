/*bar1.c*/
int main() { 
    return 0; 
}

/*
$ gcc foo1.c bar1.c
/usr/bin/ld: /tmp/ccthYKXU.o: in function `main':
bar1.c:(.text+0x0): multiple definition of `main'; /tmp/ccNtgzNR.o:foo1.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
*/