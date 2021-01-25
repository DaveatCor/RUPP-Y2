#include<iostream>
#include<conio.h>
using namespace std;


//float factorial(int n){
//	if (n == 1) return 1;
//	return n*factorial(n-1);
//}
//
//float findEachFact(int n){
//	float result;
//	for (int i = 1; i<= n; i++){
////		Execute Factorial
//		result += factorial(i);
//	}
//}

int fibonanci(int n, int c){
	if (n == 1 || n==2){
		cout<<"Hello "<< c<<endl<<endl;
		return (1);
	}else {
		cout<<"Fibonanci"<<fibonanci(n-1, n-1);
		return (fibonanci(n-1, n-1) + fibonanci(n - 2, n-2));
	}
}

int sum(int n){ 
	if (n == 1) return 1;
	else {
		return n+sum(n-1);
	}
}

int AandN(int n, int a){
	if (n == 1) return n;
	else {
		a = n * AandN(n-1, a);
		cout<<"A= "<<a<<endl;
//		return n * AandN(n-1);
	}
}

int main(){
	int n =3; int a = 1; int fact;
	cout<<"Factorial\n";
//	cin>>n;
//	fact = findEachFact(n);
//	fact = fibonanci(n, n);
	fact = AandN(n, a);
	cout<<"My factorial: "<<fact;
	getch();
}
