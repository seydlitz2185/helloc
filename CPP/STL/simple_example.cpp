#include <iostream>
#include <vector> //STL C++ 98
#include <array> //C++11

const int array_size = 4;
int main(int argc,const char ** argv){
	using namespace std;
	double a1[array_size] ={1.142857,2.2,3.3,4.4,};
	vector<double> a2(array_size);
	array<double,array_size>a3={1.1,2.2,3.3,4.4,};
	
	for(int i =0 ; i< a2.size(); i++){
		a2[i] = 0.1*i+i;
	}
	
	for(int i =0; i<a2.size();i++){
		cout<< "a1["<<i<<"]: "<<a1[i]<<" at "<<&a1[i]<<endl;	
		cout<< "a2["<<i<<"]: "<<a2[i]<<" at "<<&a2[i]<<endl;
		cout<< "a3["<<i<<"]: "<<a3[i]<<" at "<<&a3[i]<<endl;
	}
	return 0;
}
