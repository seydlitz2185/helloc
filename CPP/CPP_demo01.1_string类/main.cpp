#include <iostream>
using namespace std;
int main() {
    int i,j,k;//声明定义（声明）
    string str;//string类
    string temp;
    cout << "输入字符串：";
    cin >> str;
    cout << "串'"
         << str << "'"<< endl
         << "长度为"<< str.length() << endl;
    cout << "请输入想要查询的字符串:" << endl;
    cin >> temp ; // cin后自带一个换行
    if ((i = str.find(temp)) != string::npos)
           cout << "子串'" << str.substr(i,temp.length()) <<"'在串str中位置为"<< i;
    // str.substr(i,1)指从字符串中第i个字符处(从0开始数)开始截取1个字符，若只写str.substr(ℹi)则取i后面所有的字符
    else cout << "串str中并没有'"<<temp<<"'这个子串" ;

    return 0;
}
