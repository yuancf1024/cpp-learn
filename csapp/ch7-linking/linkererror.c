void foo(void);

int main() { 
    foo();
    return 0;
}

/*
$ gcc -Wall -Og -o linkererror linkererror.c 
/usr/bin/ld: /tmp/ccUgy91q.o: in function `main':
linkererror.c:(.text+0x9): undefined reference to `foo'
collect2: error: ld returned 1 exit status
*/