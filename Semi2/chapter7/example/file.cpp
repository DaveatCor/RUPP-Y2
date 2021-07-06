#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main(){
	char ch;
	ofstream f("myfile.txt");
	if (f.fail()){
		cout<<"File can not open:";
		return 0;
	}
	// Write File
	while(1){
		ch = getchar();
		if(ch=='#') break;
		cout<<ch;
	}
	
//	Read File
//	while(1){
//		ch = f.get();
//		if(f.eof()) break;
//		cout<<ch;
//	}
	
	f.close();
	getch();
}
