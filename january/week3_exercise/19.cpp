// Date: 19/Jan/2021

#include<iostream>
#include<conio.h>
using namespace std;

void input(float a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Index: "; cin>>a[i];
	}
}

void output(float a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<"\t";
	}
}

float sum(float a[], int n){
	float s=0;
	for(int i=0; i<n; i++){
		s+=a[i];
	}
	return s;
}

float max(float a[], int n){
	float m = a[0];
	for(int i=0; i<n; i++){
		if(m<a[i])m = a[i];
	}
	return m;
}

void sort(float a[], int n){
	float temp;
	for(int i = 0; i< n-1; i++){
		for (int j=0; j<n; j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int search(float a[], int n, float x){
	int index = -1;
	for(int i=0; i<n; i++){
		if (x==a[i]){
			index = i;
			break;
		}
	}
	return index; 
}

int main(){
	float x[95], s1, max1, data; int n, pos;
	cout<<"Number of elements:"; cin>>n;
	cout<<"Input all elements:"<<endl;
	input(x, n);
	cout<<"Output all elements: "<<endl;
	output(x, n);
	s1 = sum(x, n);
	cout<<"Sum= "<<s1<<endl;
	max1 = max(x, n);
	cout<<"Max= "<<max1<<endl;
	cout<<"Data to search: "; cin>>data;
	pos = search(x, n, data);
	cout<<"Index: "<<pos;
	if (pos<0) cout<<"Search not found:"<<endl;
	else x[pos]+=10;
	cout<< "After updat: "<<endl;
	output(x, n);
	sort(x, n);
	cout<<"After sorting: "<<endl;
	output(x, n);
	getch();
}
