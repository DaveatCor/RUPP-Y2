#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


class Person{
	
	private:
		int id;
		char name[20];
		char sex;
		
	public:
		Person(){
			id = 123;
			strcpy(name, "Daveat");
			sex = 'M';
		}
		
		Person(int i, char* na, char s){
			id = i;
			strcpy(name, na);
			sex = s;
		}
		
		void input(){
			cout<<"Id: "; cin>> id;
			cout<<"Name: "; 
			// Clear buffer for String
			cin.seekg(0, ios::end); cin.clear();
			// Input string
			cin.get(name, 20);
			cout<<"Sex: "; cin>>sex;
		}
		
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex;
		}
};

class Student:private Person{
	
	private:
		float average;
		
	public:
		Student(){
			Person();
			average = 20;
		}
		
		Student(int i, char* na, char s, float avg){
			Person(i, na, s);
			average = avg;
		}
		
		void input(){
			Person::input();
			cout<<"Average"; cin>>average;
		}
		
		void output(){
			Person::output();
			cout<<"\t"<<average<<endl;
		}
};


void sort (Student a[], int n){
	Student temp;
	
	/*Sort by average*/
//	for(int i = 0; i<n; i++)
//		for (int j=i+1; j<n; j++){
//			if (a[i].average > a[j].average){
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}

	/*Sort by name*/
	for(int i = 0; i<n; i++)
		for (int j=i+1; j<n; j++){
			if (strcmp(a[i].name, a[j].name)){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
} 

main(){
//	Student st(5555, "Tep Bopha", 'F', 85);
	Student st;
//	cout<<"Data of student: "<<endl;
//	st.output();
	
	cout<<"Input data of Student: "<<endl;
	st.input();
	cout<<"Data of student: "<<endl;
	st.output();
	
	
//	int i;
//	
//	Student [5]={
//		Student(1, "Tep Bopha", 'F', 85),
//		Student(2, "Dara", 'M', 57),
//		Student(3, "Veasna", 'M', 47),
//		Student(4, "Mary", 'F', 68),
//		Student(5, "Channy", 'F', 99)
//	};
//	for (i = 0; i< 5; i++){
//		a[i].output();
//	}
//	sort(a, 5);
	getch();
}


