#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

main(){
	int n, x;
	char ch = 'h';
	
	ofstream f("myfile.bin", ios::binary);
	
	if(f.fail()){
		cout<<"File can not open:";
		getch();
		return 0;
	}
//	cout<<"Number of integers: "; cin>>n;
//	randomnize();
//	
//	for(int i= 1; i <= n; i++){
//		x = random(100);
//		f<<x<<"\t";
//	}

//	f.write( (char*)&a, sizeof(a) );
//	f.write( (char*)&a, sizeof(float) ); 
	f.write( (char*)&ch, sizeof(ch) );
	
	
	
	f.close();
	getch();
}
