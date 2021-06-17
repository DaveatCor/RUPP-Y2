#include<iostream>
#include<conio.h>
using namespace std;

template <class Dara>

// We need to add const keyword to prevent error occur
// Error: call of overloaded function is ambiguous
void swap(const Dara &a, const Dara &b){
	Dara temp;
	temp = a; 
	a = b;
	b = temp;
}
int main(){
	int a = 10, b = 20;
	float x = 45.5, y = 22.5;
	char ch1= 'A', ch2= 'B';
	
//	Rectangle t1 (60, 45), t2(30, 20);
	
	swap(a, b);
	swap(x, y);
	swap(ch1, ch2);
	
	cout<<"After swapping: "<<endl;
	cout<<"A= "<<a<<"\tb= "<<b<<endl;
	cout<<"X= "<<x<<"\tY= "<<y<<endl;
	cout<<"Ch1= "<<ch1<<"\tCh2= "<<ch2<<endl;
	
	getch();
}
