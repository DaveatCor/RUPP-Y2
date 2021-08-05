// Date 03/Aug/21 

#include<iostream>
#include<conio.h>
#include<fstream.h>
#include<string.h>

class Student {
	private:
		int id;
		char name[20];
		char sex;
		float average;
		
	public:
		Student();
		Student(int i, char *na, char s, float a);
		void input(){
			cout<<"Id: "; cin>>id;
			cout<<"Name: "; cin.seekg(0, ios::end); cin.clear();
			cin.get(name);
			cout<<"Sex: "; cin>>sex;
			cout<<"Average"; cin>>average;
		}
		
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<average<<endl;
		}
		
		void set(int i, char *na, char s, float a){
			id = i;
			strcpy(name, na);
			sex = s;
			average = a;
		}
};

Student::Student(){
	id = 123;
	strcpy(name, "Daveat");
	sex = 'M';
	average = 10;
}

Student::Student(int i, char *n, char s, float a){
	id = i;
	strcpy(name, i);
	sex = s;
	average = a;
}

void readData(char *fname){
	Student x[100]; int n;
	ifstream f;
	f.open(fname, ios::binary);
	if (f.fail()){
		cout<<"File can not open:";
		getch();
		exit(0);
	}
	
	f.seekg(0, ios::end);
	n = f.tellg()/sizeof(Student);
	
	f.seekg(0, ios::beg);
	f.read( (char*)x, n*sizeof(Student));
	f.close();
	
	for (int i = 0; i<n; i++){
		x[i].output();
	}
}

void writeData(char *fname){
	
	Student x[100]; int n;
	ofstream f;
	f.open(fname, ios::binary);
	if (f.fail()){
		cout<<"File can not open:";
		getch();
		exit(0);
	}
	cout<<"Number of students: "; cin>>n;
	
	for (int i = 0; i<n; i++){
		cout<<"Student "<<(i+1)<<": "<<endl;
		x[i].input();
	}
	
	f.write( (char*)x, n*sizeof(Student));
	f.close();
}

void append(char *fname){
	
	Student x[100]; int n;
	ofstream f;
	f.open(fname, ios::binary|ios::app);
	if (f.fail()){
		cout<<"File can not open:";
		getch();
		exit(0);
	}
	cout<<"Number of students: "; cin>>n;
	
	for (int i = 0; i<n; i++){
		cout<<"Student "<<(i+1)<<": "<<endl;
		x[i].input();
	}
	
	f.write( (char*)x, n*sizeof(Student));
	f.close();
}


void remove(char *fname){
	
	Student x[100]; int n, idRe;
	ofstream f;
	f.open(fname, ios::binary);
	if (f.fail()){
		cout<<"File can not open:";
		getch();
		exit(0);
	}
	
	f.seekg(0, ios::end);
	n=f.tellg() / sizeof(Student);
	
	f.seekg(0, ios::beg);
	f.read( (char*)x, n*sizeof(Student));
	
	f.close();
	
	ofstream f1(fname, ios::binary);
	
	if (f1.fail()){
		cout<<"File can not open: ";
		getch();
		exit(0);
	}
	
	cout<<"Id to remove: "; cin>>idRe;
	
	for(int i = 0; i <n; i++){
		if (x[i].getId() != idRe) f1.write ( (char*)x, n*sizeof(Student));
	}
	f.close();
}


void update(char *fname){
	
	Student x[100]; int n, idUp, pos;
	ifstream f;
	f.open(fname, ios::binary);
	if (f.fail()){
		cout<<"File can not open:";
		getch();
		exit(0);
	}
	
	f.seekg(0, ios::end);
	n=f.tellg() / sizeof(Student);
	
	f.seekg(0, ios::beg);
	f.read( (char*)x, n*sizeof(Student));
	
	f.close();
	
	ofstream f1(fname, ios::binary);
	
	if (f1.fail()){
		cout<<"File can not open: ";
		getch();
		exit(0);
	}
	
	cout<<"Id to remove: "; cin>>idRe;
	pos = 0;
	for(int i = 0; i <n; i++){
		if (x[i].getId() != idUp) pos++;
		else break;
	}
	
	cout<<"Data of student to update: "<<endl;
	
	x[pos].input();
	f1.write ( (char*)x, n*sizeof(Student));
	f.close();
}

main(){
	
	char fileName[20], ch; int select;
	
	again:
		cout<<"1(Write), 2(Read), 3(Append), 4(Update), 5(Remove): ";
		cin>>select;
		switch (select){
			case 1:
				cout<<"File name: "; 
				cin.seekg(0, ios::end); cin.clear();
				cin.get(fileName, 20);
				writeData(fileName);
				break;
			case 2: 
				
				cout<<"File name: "; 
				cin.seekg(0, ios::end); cin.clear();
				cin.get(fileName, 20);
				readData(fileName);
				break;
			case 3: 
				
				cout<<"File name: "; 
				cin.seekg(0, ios::end); cin.clear();
				cin.get(fileName, 20);
				append(fileName);
				break;
				
			case 4: 
				
				cout<<"File name: "; 
				cin.seekg(0, ios::end); cin.clear();
				cin.get(fileName, 20);
				update(fileName);
				break;
				
			case 5: 
				
				cout<<"File name: "; 
				cin.seekg(0, ios::end); cin.clear();
				cin.get(fileName, 20);
				remove(fileName);
				break;
			default:
				cout<<"Try again";
		}
		
		cout<<"Press y to continue: "; cin.seekg(0, ios::end); cin.clear();
		cin>>ch;
		if(ch == 'y') goto again;
	getch();
}
