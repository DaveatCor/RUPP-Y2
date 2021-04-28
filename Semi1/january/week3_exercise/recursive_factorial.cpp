#include<iostream>
#include<conio.h>
using namespace std;


float factorial(int n){
	if (n == 1) return 1;
	return n*factorial(n-1);
}

float findEachFact(int n){
	float result;
	for (int i = 1; i<= n; i++){
//		Execute Factorial
		result += factorial(i);
	}
}

int main(){
	int n; float fact;
	cout<<"Factorial";
	cin>>n;
	fact = findEachFact(n);
	cout<<"My factorial: "<<fact;
	getch();
}
