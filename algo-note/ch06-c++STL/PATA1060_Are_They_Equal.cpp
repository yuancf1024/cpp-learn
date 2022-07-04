/* PAT (Advanced Level) Practice 1060 Are They Equal
If a machine can save only 3 significant digits, the float numbers 
12300 and 12358.9 are considered equal since they are both saved 
as 0.123×10^5 with simple chopping. 
Now given the number of significant digits on a machine and 
two float numbers, you are supposed to tell if they are treated 
equal in that machine.

Input Specification:

Each input file contains one test case which gives three numbers N, 
A and B, where N (<100) is the number of significant digits, 
and A and B are the two float numbers to be compared. 
Each float number is non-negative, no greater than 10^100
, and that its total digit number is less than 100.

Output Specification:

For each test case, print in a line YES if the two numbers are 
treated equal, and then the number in the standard form 
0.d[1]...d[N]*10^k (d[1]>0 unless the number is 0); 
or NO if they are not treated equal, and then the two numbers 
in their standard form. All the terms must be separated by a space, 
with no extra space at the end of a line.

Note: Simple chopping is assumed without rounding.

Sample Input 1:
3 12300 12358.9

Sample Output 1:
YES 0.123*10^5

Sample Input 2:
3 120 128

Sample Output 2:
NO 0.120*10^3 0.128*10^3

*/

/*
题目大意：
给出两个数，问：将它们写成保留N位小数的科学计数法后是否相等。
如果相等，则输出YES，并给出该转换结果；
如果不相等，则输出NO，并分别给出两个数的转换结果。

解题思路：
题目的要求是将两个数改写为科学计数法的形式，然后判断它们是否相等。
而科学计数法的写法一定是如下格式：0.a1a2a3...*10^e，因此只需要
获取到科学计数法的本体部分a1a2a3与指数e，即可判定两个数在科学计数法形式下是否相等。

考虑数据本身，按整数部分是否为0来分情况讨论，即
- 1. 0.a1a2a3
- 2. b1b2...bm.a1a2a3
*/

#include <iostream>
#include <string>

using namespace std;

int n; // 有效位数

string deal(string s, int& e) { int k = 0; // s的下标
    while(s.length() > 0 && s[0] == '0') {
        s.erase(s.begin()); // 去掉s的前导零
    }
    if (s[0] == '.') { // 去掉前导零后是小数点，说明s是小于1的数
        s.erase(s.begin()); // 去掉小数点
        while (s.length() > 0 && s[0] == '0') {
            s.erase(s.begin()); // 去掉小数点后非零位前的所有零
            e--; // 每去掉一个0，指数e减1
        }
    } else { // 去掉前导零后不是小数点，则找到后面的小数点删除
        while (k < s.length() && s[k] != '.') { // 寻找小数点
            k++;
            e++; // 只要不碰到小数点就让指数e++
        }
        if (k < s.length()) { // while 结束后 k < s.length(), 说明碰到了小数点
            s.erase(s.begin() + k); // 把小数点删除
        }
    }
    if (s.length() == 0 ) {
        e = 0; // 如果去除前导零后s的长度变为0，说明这个数是0
    }
    int num = 0;
    k = 0;
    string res;
    while (num < n) { // 只要精度还没有到达n
        if (k < s.length())
            res += s[k++]; // 只要还有数字，就加到res末尾
        else
            res += '0'; // 否则res末尾添加0
        num++; // 精度加1
    }
    return res;
}

int main() { string s1, s2, s3, s4;
    cin >> n >> s1 >> s2;
    int e1 = 0, e2 = 0; // e1, e2 为s1与s2的指数
    s3 = deal(s1, e1);
    s4 = deal(s2, e2);
    if (s3 == s4 && e1 == e2) { // 主体相同且指数相同则YES
        cout << "YES 0." << s3 << "*10^" << e1 << endl;
    } else {
        cout << "NO 0." << s3 << "*10^" << e1 
        << " 0." << s4 << "*10^" << e2 << endl;
    }
}