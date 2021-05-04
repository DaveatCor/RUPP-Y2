//Date 18/Mar/21
// Title: Inheritance (Single inheritance)
#include<iostream>
#include<conio.h>
using namespace std;


class Point{
	private:
		int x, y;
	public:
		Point(){
			x  = 0; y = 0;
		}
		Point(int xx, int yy){
			x = xx; y = yy;
		}
		
		void set(int xx, int yy){
			x = xx; y = yy;
		}
		void input();
		void output();
};

class Circle:private Point{
	private:
		float radius;
	public:
		Circle():Point(), radius(1){}
		
		Circle(int xx, int yy, float r):Point(xx, yy), radius(r){}
		
		void set(int xx, int yy, float r){
			Point::set(xx, yy);
			radius = r;
		}
		void input();
		void output();
		float area();
}; 

void Point::input(){
	cout<<"input x: "; cin>>x;
	cout<<"input y: "; cin>>y;
}

void Point::output(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

void Circle::input(){
	Point::input();
	cout<<"Enter radius: "; cin>>radius;
}

void Circle::output(){
	Point::output();
	cout<<"\t"<<radius<<","<<area()<<endl;
}

float Circle::area(){
	return 3.14*(radius*radius);
}

main(){
	Point p;
	p.input();
	p.output();
	cout<<endl;
	Circle c (11, 22, 50);
	//c.set(15, 35, 45);
	c.output();
	c.input();
	getch();
}


