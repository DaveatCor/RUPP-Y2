#include<iostream>
#include<conio.h>

using namespace std; 

class StaticTest{
	
	public:
		static int count;
		static void show(){
			cout<<"There are "<<cout<<" Object alive"<<endl;
		}
	private:
		int order;
	public:
		StaticTest(){
			count++;
			order = count;
		}
		~StaticTest(){
			cout<<"Object ="<<order<<" at position"<<this<<count<<" was destroyed"<<endl;
			count--;
		}
		void print(){
			cout<<"The object :"<<order<<endl;
		}
};

int StaticTest::count=0;
main(){
	StaticTest b1;
	b1.print();
	StaticTest::show();
	
	StaticTest* p1=new StaticTest;
	p1->print();
	StaticTest* p2=new StaticTest;
	p2->print();
	
	StaticTest b2;
	b2.print();
	StaticTest::show();
	
	delete p1;
	delete p2;
	StaticTest::show();
	getch();
	
}
