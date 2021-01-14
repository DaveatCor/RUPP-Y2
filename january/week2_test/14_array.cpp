#include<iostream>
#include<conio.h>
using namespace std;

void input(float a[], int n){ 
 	for (int i=0; i<n; i++){
		cout<<"..........\n";
		cin>>a[i];
	}
 }

void output(float a[], int n){
	for (int i = 0; i< n; i++){
		cout<<a[i]<<"\t";
	}
}

int main(){
	float x[100]; // without initialze size => x[] = {34, 78, 92, 16, 29, 55, 15};
	int n;
	cout<<"Number of elements: "; cin>>n;
	input(x, n);
	output(x, n);
	getch();
}
