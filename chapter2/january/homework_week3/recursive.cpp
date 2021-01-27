#include<iostream>
#include<conio.h>
using namespace std;


float factorial(int n){
	if (n == 1) return 1;
	return n*factorial(n-1);
}

int fibonanci(int n){ // Not yet understand
	if (n == 1 || n==2){
		return (1);
	}else {
		return (fibonanci(n-1) + fibonanci(n - 2));
	}
}

int sum(int n){ 
	if (n == 1) return 1;
	else {
		return n+sum(n-1);
	}
}

int AandN(int a, int n){
	if (n == 1) return a;
	else {
		return a * AandN(a, n-1);
	}
}

int main(){
	int n = 3; int a = 2; int fact;
	cout<<"Factorial\n";
//	cin>>n;
//	fact = findEachFact(n);
//	fact = fibonanci(n, n);
	fact = AandN(a, n);
	cout<<"My factorial: "<<fact;
	getch();
}
