//
//  main.cpp
//  CPPDemo04_test
//
//  Created by Steven Yu on 2021/10/20.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
//    string s1 = "test";
//    string s2 = "string";
//    char s3[10] = {"char[]\ "};
//    char s4[10] = {"chars"};
//    cout << strcat(s3, s4)<<"\n";
//    string temp;
//    getline(cin,temp);
//    cout<<s1+' '<<temp+' '<<&s3<<"\n";
    
    int a = 1;
    int &b = a;
    int *c = new int;
    
    *c = a;
    cout<< &b<<"\n"<<&a<<"\n"<<c<<endl;
    return 0;
}
