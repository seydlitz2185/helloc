//
//  main.cpp
//  CPPDemo05
//
//  Created by Steven Yu on 2021/10/26.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"输入两个整数："<<"\n";
    int a,b;
    cin >>a;
    cout<<"已经输入整数a =  "<<a<<"\n";
    cin >>b;
    cout<<"已经输入整数b = "<<b<<"\n";
    int aPlusB =a+b;
    int aMinusB = a-b;
    int aMultiplyB = a*b;
    double aTemp = a,bTemp = b;
    
    double aDivideB = aTemp/bTemp;
    int aModB = a%b;
    
    cout<<"a + b = "<<aPlusB<<"\n"
        <<"a - b = "<<aMinusB<<"\n"
        <<"a * b = "<<aMultiplyB<<"\n"
        <<"a / b = "<<fixed<<setprecision(2)<<aDivideB<<"\n"
        <<"a % b = "<<aModB<<endl;
    return 0;
}
