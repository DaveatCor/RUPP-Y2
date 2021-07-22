#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

main(){
	int x[100], n;
	char ch;
	
	ifstream f("myfile.bin", ios::binary);
	
	if (f.fail()){
		cout<<"Cannot open file";
	}
	
//	cout<<"Number of students: "; cin>> n;
	
//	for (int i = 0; i < n; i++){
//		cout<<"Student "<<(i+1)<<": "<<endl;
//		x[i].input();
//	}
	
	// 20/Jul/21
	// Read Binary File With Array
	while(1){
		f.read( (char*)&ch, sizeof(ch));
		if(f.eof()) break;
	}
	cout<<ch;
	
	f.close();
	
	getch();
}
