//18/Feb/2021

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Student{
	
	private:
		int id;
		char name[20];
		char sex;
		float average;
	
	public: 
	
		// Default Constructor
		Student();
		
		// Constructor with parameter
		Student(int i, const char* n, char s, float aver){
			id = i;
			strcpy(name, n);
			sex = s;
			average = aver;
		}
		
		// Copy Constructor
		Student(Student &p){
			id = p.id;
			strcpy(name, p.name);
			sex = p.sex;
			average = p.average;
		}
		
		void input(){
			cout<<"Id: "; cin>>id;
			cout<<"Name: "; cin.seekg(0, ios::end); cin.clear();
			cin.get(name, 20);
			cout<<"Sex: "; cin>> sex;
			cout<<"Average: "; cin>> average;
		}
		
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<average<<endl;
		}
};

//Outside Class
Student::Student(){
	id = 123;
	strcpy(name, "abc");
	sex= 'M';
	average = 10;
}

main(){
	Student s1, s2(2222, "S", 'M', 85), s3(s2);
	cout<<"Data of s1: "<<endl;
	s1.output();
	
	cout<<"Data of s2: "<<endl;
	s2.output();
	
	cout<<"Data of s3: "<<endl;
	s3.output();
	getch();
}
