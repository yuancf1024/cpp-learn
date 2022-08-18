#include <iostream>
#include <cstring>

using namespace std;

int main() { 
    string str1 = "Spend all your time waiting.";
    string str2 = "For that second chance.";
    string str3(str1, 6);
    string str4(str1, 6, 3);

    char ch_music[] = "Sarah McLachlan";
    string str5 = ch_music;
    string str6(ch_music);
    string str7(ch_music, 5);
    string str8(4, 'a');
    string str9(ch_music + 6, ch_music + 14);

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;
    cout << "str6: " << str6 << endl;
    cout << "str7: " << str7 << endl;
    cout << "str8: " << str8 << endl;
    cout << "str9: " << str9 << endl;
    return 0;
}

/**
 * @brief string的声明
str1: Spend all your time waiting.
str2: For that second chance.
str3: all your time waiting.
str4: all
str5: Sarah McLachlan
str6: Sarah McLachlan
str7: Sarah
str8: aaaa
str9: McLachla
 */