#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int x[100], n;
	
	ifstream f("myfile.bin", ios::binary);
	
	if (f.fail()){
		cout<<"Cannot open file";
	}
	
	cout<<"Number of students: "; cin>> n;
	
	for (int i = 0; i < n; i++){
		cout<<"Student "<<(i+1)<<": "<<endl;
		x[i].input();
	}
	
	// 20/Jul/21
	// Read Binary File With Array
	while(1){
		f.read( (char*)x, n*sizeof(Student));
		if(f.eof()) break;
		n++;
	}
	
	f.close();
	
	getch();
}
