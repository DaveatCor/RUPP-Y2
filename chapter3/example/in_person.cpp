#include <iostream>
#Include <conio.h>
using namespace std;


class Person{
	
	private:
		int id;
		char *name;
		char sex;
		float average;
	public:
		void input(){
			
		}
		
		void output(){
			
		}
};

class Student:private Person{
	
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

void main(){
//	Student st(5555, "Tep Bopha", 'F', 85);
//	cout<<"Data of student: "<<endl;
//	st.output();
	/*	
	cout<<"Input data of Student: "<<endl;
	st.input();
	cout<<"Data of student: "<<endl;
	st.output():
	*/
	
	int i;
	
	Student [5]={
		Student(1, "Tep Bopha", 'F', 85),
		Student(2, "Dara", 'M', 57),
		Student(3, "Veasna", 'M', 47),
		Student(4, "Mary", 'F', 68),
		Student(5, "Channy", 'F', 99)
	};
	for (i = 0; i< 5; i++){
		a[i].output();
	}
	sort(a, 5);
	getch();
}


