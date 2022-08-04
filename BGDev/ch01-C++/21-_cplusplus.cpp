#include <stdio.h>
int main() {
    #define TO_LITERAL(text) TO_LITEREAL_(text)
    #define TO_LITERAL_(text) #text
    #ifndef __cplusplus
    /* this translation uint is being treated as a C one*/
        printf("a C program\n");
    #else
        /*this translation uint is being treated as a C++ one*/
        printf("a C++ program\n__cplusplus expands to \""
        TO_LITERAL_(__cplusplus) "\"\n");
    #endif
    return 0;
}

/**
 * @brief 
 * 例1.20中程序的意思是：如果没有定义__cplusplus，
 * 那么当前源代码就会被当作C源代码处理；如果定义了__cplusplus，
 * 那么当前源代码会被当中C++源代码处理，并且输出__cplusplus宏
 * 被展开后的字符串。
a C++ program
__cplusplus expands to "__cplusplus"
 */