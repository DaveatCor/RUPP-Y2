#include<iostream>
#include<conio.h>
#include<iomani> // Header For Function manipulate
using namespace std;

main(){
	int x = 28;
//	Convert Decimal(10) To Octal(8)
//	cout<<"26 to oct ="<<oct<<x;

//	Convert Decimal(10) To Hexa(8)
//	cout<<"26 to oct ="<<hex<<x;

//	SetBase Convert Only 10, 8, 16 cannot convert to binary(2)
	cout<<"28 to oct ="<<setbase(8)<<x;
	getch();
} 
