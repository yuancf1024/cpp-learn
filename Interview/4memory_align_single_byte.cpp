#include <iostream>

using namespace std;

#if defined(__GNUC__) || defined(__GNUG__)
  #define ONEBYTE_ALIGN __attribute__((packed))
#elif defined(_MSC_VER)
  #define ONEBYTE_ALIGN
  #pragma pack(push,1)
#endif

struct Info {
  uint8_t a;
  uint32_t b;
  uint8_t c;
} ONEBYTE_ALIGN;

#if defined(__GNUC__) || defined(__GNUG__)
  #undef ONEBYTE_ALIGN
#elif defined(_MSC_VER)
  #pragma pack(pop)
  #undef ONEBYTE_ALIGN
#endif

int main() {
    /*
    如果想使用单字节对齐的方式，使用alignas是无效的。
    应该使用#pragma pack(push,1)或者使用__attribute__((packed))。
    */
    cout << sizeof(Info) << endl;   // 6 1 + 4 + 1
    cout << alignof(Info) << endl;  // 6 // 这一结果和运行结果不一致
}

