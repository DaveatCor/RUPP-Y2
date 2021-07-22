#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int x[100], n, x, s = 0;
	
	ifstream f("myfile.bin", ios::binary);
	
	if (f.fail()){
		cout<<"Errror";
	}	
	
//	n = 0;
//	
//	while(1){
//		f.read( (char*)&a[n], sizeof(int));
//	}

	f.seekg( 10*sizeof(int), ios::beg);
	f.read( (char*)&x, sizeof(int) );
	
	f.seekg( 17*sizeof()&xy, ios::cur);
	f.read( (char*)&x, sizeof(int) );
}
