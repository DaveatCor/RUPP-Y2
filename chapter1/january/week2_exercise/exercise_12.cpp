#include<iostream>
#include<conio.h>
#include<iomanip> // Use for setbase()
using namespace std;

int main(){
	int x = 26;
	// Covert Integer to oct
	//cout<<"X = "<<oct<<x;
	
	
	// Covert Integer to hex
	// cout<<"X = "<<hex<<x;
	
	// Convertor #include<iomanip>
	 cout<<"X = "<<setbase(8)<<x;
	
}
