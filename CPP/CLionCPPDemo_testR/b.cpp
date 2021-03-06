//
// Created by Steven Yu on 2021/10/26.
//

//
//  AddTwoIntegers.cpp
//  CPPdemo06_testGtest
//
//  Created by Steven Yu on 2021/10/26.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class AddTwoIntegers{
public:
    AddTwoIntegers(void );
    AddTwoIntegers(int i1,int i2);
    void output(void);
    int aPlusB(void);
    int aMinusB(void);
    int aMultipliedByB(void);
    double aDividedByB(void);
    int aModB(void);
    void toFile(void );
private:
    /*First Integer*/
    int a;
    /*Second Integer*/
    int b;
};
AddTwoIntegers::AddTwoIntegers(void){
    cout<<"输入两个整数："<<"\n";
    cin >>a;
    cout<<"已经输入整数a =  "<<a<<"\n";
    cin >>b;
    cout<<"已经输入整数b = "<<b<<"\n";
}


AddTwoIntegers::AddTwoIntegers(int a, int b){
    this->a = a;
    this->b = b;
}

int AddTwoIntegers::aPlusB(void){
    return a+b;
}
int AddTwoIntegers::aMinusB(void){
    return a-b;
}
int AddTwoIntegers::aMultipliedByB(void){
    return a*b;
}
double AddTwoIntegers::aDividedByB(void){
    return (double)a/(double)b;
}
int AddTwoIntegers::aModB(void){
    return a%b;
}
void AddTwoIntegers::output(void){
    cout<<"Output\n"
        <<"a + b = "<<aPlusB()<<"\n"
        <<"a - b = "<<aMinusB()<<"\n"
        <<"a * b = "<<aMultipliedByB()<<"\n"
        <<"a / b = "<<fixed<<setprecision(2)<<aDividedByB()<<"\n"
        <<"a % b = "<<aModB()<<endl;

}

void AddTwoIntegers::toFile(){
    //2. 创建流
    fstream output;
    //3. 打开文件，将流与文件相关联，这里使用绝对路径
    output.open("/Users/stevenyu/CLionProjects/CPP/CLionCPPDemo_testR/out.txt");
    //4. 向文件写入数据

    output<<"Output\n"
        <<"a + b = "<<aPlusB()<<"\n"
        <<"a - b = "<<aMinusB()<<"\n"
        <<"a * b = "<<aMultipliedByB()<<"\n"
        <<"a / b = "<<fixed<<setprecision(2)<<aDividedByB()<<"\n"
        <<"a % b = "<<aModB()<<endl;

    //5. 关闭流
    output.close();

}