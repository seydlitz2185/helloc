//
//  main.cpp
//  floatTest
//
//  Created by Steven Yu on 2021/11/5.
//

#include <iostream>

int sizeTest(char* a){
    return strlen(a);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    float a = 16777216.0;
    float b = 16777217.0;
    float c = a-b;
    int d = 0x00FFFFFF;
    float df = 16777215.0;
    
//    unsigned ub = 2147483648;
//    char s[65535] ;
//    for(int i = 0; i<65535;i++){
//        s[i] = 'h';
//    }
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << df <<'\n';
//    std::cout << sizeof(s) << '\n';
//    std::cout << sizeTest(s)<<std::endl;
    return 0;
}



    
    
    

