#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle{
	
	private:
		float l, w;
		
	public:
		Rectangle(float ll=3, float w1=2){
			l=ll;
			w=w1;
		}
			
		float area(){
			return l*w;
		}
			
		friend istream& operator>>(istream& is, Rectangle& r){
			cout<<"Length: "; is>>r.l;
			cout<<"Width: "; is>>r.w;
		}
			
		friend ostream& operator>>(ostream& os, Rectangle& r){
			os<<"Length: "<<r.l;
			os<<"\nWdith: "<<r.w;
		}
		
		float operator+(Rectangle& r){
			return (area()+r.area());
		}
};

class Worker{
	
	private:
		char name[20]; float hour, rate;
		
	public:
		
		// Overloading
		friend istream& operator>>(istream& is, Worker& w){
			cout<<"Name: "; is.seekg(0, ios::end); is.clear(); 
			is.get(w.name, 20);
			cout<<"Hour: "; is>>w.hour;
			cout<<"Rate: "; is>>w.rate;
			return is;
		}
		
		// Overloading
		friend ostream& operator<<(ostream& os, Worker& w){
			os<<"Name: "<<w.name;	
			os<<"\nHour: "<<w.hour;	
			os<<"\nName: "<<w.rate;	
		}
		
		// Overloading
		float operator+(Worker w){
			return (income()+w.income());
		}
		
		float income(){
			return hour*rate;
		}
};

template<class T1>
class Show{
	private:
		T1 x;
		T1 y;
	public:
		void input();
		void output();
		void sum(){
			return (x+y);
		}
};

template<class T1>
void Show<T1>::input(){
	cout<<"Input x: "; cin>>x;
	cout<<"Input y: "; cin>>y;
}

template<class T1>
void Show<T1>::output(){
	cout<<"X: "<<x;
	cout<<"\nY: "<<y;
	cout<<"\nSum: "<<sum();
}

main(){
	
	Show<int>obj1; obj1.input(); obj1.output();
	Show<float>obj2; obj2.input(); obj2.output();
	Show<Rectangle>obj3; obj3.input(); obj3.output();
	Show<Worker>obj4; obj4.input(); obj4.output();
	
	getch();
}
