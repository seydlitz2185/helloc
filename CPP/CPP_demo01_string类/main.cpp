#include <iostream>
using namespace std;
int main() {
    int i;char j;//声明定义（声明）
    string str("C++noob");//string类
    cout << "串'"
         << str << "'"<< endl
         << "长度为"<< str.length() << endl;
    cout << "请输入想要查询的字符:" << endl;
    cin >> j ; // cin后自带一个换行
    if ((i = str.find(j)) != string::npos)
        cout << "字符'" << str.substr(i,1) <<"'是串str中第"<< i+1<<"个字符";
    // str.substr(i,1)指从字符串中第i个字符处(从0开始数)开始截取1个字符，若只写str.substr(ℹi)则取i后面所有的字符
    else cout << "串str中并没有'"<<j<<"'这个字符" ;

    return 0;
}
