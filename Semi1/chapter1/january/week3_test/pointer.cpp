#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a[8]={45, 27, 82, 39, 62, 16, 72, 22}, *p;
	int b[8];
	*p = a[2];
	for (int i=0; i< 8; i++){
		cout<<*(p+i)<<"\t";
	}
	getch();
}
