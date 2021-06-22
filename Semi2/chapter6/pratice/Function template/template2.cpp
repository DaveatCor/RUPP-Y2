#include<iostream>
#include<conio.h>
using namespace std;

// Remain Exercise (Search, Max), and we need to overload

class Rectangle{
	private:
		float length;
		float width;
	public:
		
		friend istream& operator>>(istream &is, Rectangle r){
			cout<<"length: "; is>>r.length;
			cout<<"Width: "; is>>r.width;
			return is;
		}
		
		friend ostream& operator<<(ostream &os, Rectangle r){
			os<<r.length<<"\t"<<r.width<<"\t"<<r.area()<<endl;
			return os;
		}
		
		// If We use keyword friend we need 2 parameter
		// If We are not use keyword friend we need 1 parameter
		friend float operator+(float x, Rectangle r){
			return (r.area()+ x);
		}
		
		int operator>(Rectangle r){
			return (area() > r.area());
		}
		
		void output(){
			cout<<length<<"\t"<<width<<"\t"<<area()<<endl;
		}
		
		float area(){
			return length*width;
		}
};

template<class Data>
float sum(const Data a[], int n){
	float s = 0;
	for (int i = 0; i<n; i++){
		s = s + a[i];
	}
	return s;
} 

template<class Data>
void sort(Data a[], int n){
	Data temp;
	for(int i = 0; i< n; i++){
		for (int j = i+1; j <n; j++){
			temp = a[i];
			if (a[i]>a[j]){
				a[i] = a[j];
				a[j] = temp;
			}	
		}
	}
}

template <class Data>
void inputAll(Data a[], int n){
	for (int i = 0; i<n; i++){
		cout<<"Element "<<(i+1)<<": ";
		cin>>a[i];
	}
}

template <class Data>
void outputAll(Data a[], int n){
	for (int i = 0; i<n; i++){
		cout<<"Element "<<a[i]<<endl;
	}
}

main(){
	float a[100];
	Rectangle b[100];
	int s1, s2, n;
	
	// Input Data
	cout<<"Number of elements: "; cin>>n;
	cout<<"Input all elements of arrry a: "<<endl;
	inputAll(a, n);
	cout<<"Input all elements of arrry b: "<<endl;
	inputAll(b, n);
	
	// Output Data
	cout<<"Output all elements of arrry a: "<<endl;
	outputAll(a, n);
	
	cout<<"Output all elements of arrry b: "<<endl;
	outputAll(b, n);
	
	// Find Sum Of Array A and B
	s1 = sum(a, n);
	s2 = sum(b, n);
	
	cout<<"Total element of a: "<<s1<<endl;
	cout<<"Total element of b: "<<s2<<endl;
	
	//  Sort Data Of Array
	sort(a, n);
	sort(b, n);
	
	cout<<"Output after sort all elements of arrry a: "<<endl;
	outputAll(a, n);
	
	cout<<"Output after sort all elements of arrry b: "<<endl;
	outputAll(b, n);
	
	getch();
}
