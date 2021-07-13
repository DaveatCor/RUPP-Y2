#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

main(){
	int x[100], i, s=0;
	char ch;
	ofstream f("myfile.txt", ios::out);
	
	if(f.fail()){
		cout<<"File can not open";
		getch();
		return 0;
	}
	
	while(1){
		ch = getchar();
		if (ch == '#') break;
		f<<ch;
	}
	
	ifstream fread("myfile.txt");
	
	i=0;
	while(1){
		fread>>x[i];
		cout<<x[i];
		if(fread.eof()) break;
		i++;
	}
	
	f.close();
	fread.close();
	getch();
	
}
