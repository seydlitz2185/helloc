//
//  main.cpp
//  CPPDemo05
//
//  Created by Steven Yu on 2021/10/26.
//

#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"输入两个整数："<<"\n";
    double a,b;
    
    try {
        cout << "输入整数a：\n";
        if( scanf("%lf",&a)==0)
            throw -1; //抛出int类型异常
        else{
            cout<<"已经输入整数a =  "<<a<<"\n";
            cout << "输入整数b：\n";
            if( scanf("%lf",&b)==0)
                throw -1;
            else
                cout<<"已经输入整数b =  "<<b<<"\n";
        }
    }

    catch(int i){
        cout<<"无效输入\n";
        rewind(stdin);
    }
    


    
    
    
//    int aPlusB =a+b;
//    int aMinusB = a-b;
//    int aMultiplyB = a*b;
//    double aTemp = a,bTemp = b;
//
//    double aDivideB = aTemp/bTemp;
//    int aModB = a%b;
    
//    cout<<"a + b = "<<aPlusB<<"\n"
//        <<"a - b = "<<aMinusB<<"\n"
//        <<"a * b = "<<aMultiplyB<<"\n"
//        <<"a / b = "<<fixed<<setprecision(2)<<aDivideB<<"\n"
//        <<"a % b = "<<aModB<<endl;
//

    return 0;
}
