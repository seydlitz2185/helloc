//
//  main.cpp
//  cpptest
//
//  Created by Steven Yu on 2021/8/24.
//

#include <iostream>
using namespace std;
void echo(string* s);

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "hello~xcode\n"<<endl<<"nihao"<<endl;
    string s = "测试echo";
    echo(&s);
    
    
    return 0;
}

void echo(string* s){
    puts(s->c_str());
}
