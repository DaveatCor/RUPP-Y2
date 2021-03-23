#include<iostream>
#include<conio.h>
using namespace std;

class A{
	protected:
		int x;
	public: 
		void input(){
			cout<<"Input x"; cin>>x;
		}
		void output(){
			cout<<"X = "<<x<<endl;
		}
};

class B:private A{
	private:
		int y;
	public:
		void input(){
			//A::input();
			cout<<"Input x"; cin>>x;
			cout<<"Input y"; cin>>y;
		}
		void output(){
			A::output();
			cout<<"Y = "<<y<<endl;
		}
};

class C:private B{
	private:
		int z;
	
	public:
		void input(){
			B::input();
			cout<<"Input z"; cin>>z;
		}
		void output(){
			B::output();
			cout<<"Z = "<<z<<endl;
		}
};

main(){
//	A a;
	B b;
//	C c;
	
//	a.input();
//	cout<<"Data of object ";
//	a.output();
	
	// Call Out put of b (x, y);
	b.input();
	cout<<"Data of object ";
	b.output();
	
	// Call Out put of C (x, y, z);
//	c.input();
//	cout<<"Data of object ";
//	c.output();
	
	// Call Out put of b (x, y);
//	c.B::input();
//	cout<<"Data of object ";
//	c.output();

	getch();
}
