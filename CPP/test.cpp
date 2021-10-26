#include "iostream"
#include "string"
#include "iomanip"
#define length 10
using namespace std;


struct Student{
	string name;
	int gender;
	double GPA;

	Student() :name("student_name"),gender(0),GPA(4.5){} 
	Student(string s , int i , double g) :name(s), gender(i),GPA(g){} 
	
}N[length];

int main (void){
	cout<<"hello"<<endl;
	N[0] = Student("sam",1,2.8);
	N[1] = Student();
	for(int i = 0; i< length ; i++){
		cout <<left << setw(20) <<setfill(' ') << N[i].name <<left<< setw(10) << setfill(' ')  << N[i].gender 
		<<left << setw(10) << setfill(' ')	<<setiosflags(ios::showpoint)<<N[i].GPA <<endl;
	}
	system("pause");
	
	return 0;
}