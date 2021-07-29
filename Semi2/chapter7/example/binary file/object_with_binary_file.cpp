#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class Student {
	
	private:
		int id;
		char name[20];
		char sex;
		float avg;
		
	public:
		
		void input(){
			cout<<"Input ID: "; cin>>id;
			// Clear buffer Enter From Keyboard
			cin.seekg( 0, ios::end ); cin.clear();
			cout<<"Input name: "; gets(name);
			cout<<"Input sex: "; cin>>sex;
			cout<<"Input Average: "; cin>>avg;			
		}
		
		void output(){
			cout<<"ID: "<<id;
			cout<<"\nName: "<<name;
			cout<<"\nSex: "<<sex;
			cout<<"\nAverage: "<<avg;	
		}
};

main(){
	Student stu;
	ofstream f("student.bin", ios::binary);
	
	if (f.fail()){
		cout<<"File cannot open";
	}
	
	stu.input();
	stu.output();
	
	getch();
}
