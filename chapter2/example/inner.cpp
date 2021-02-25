//Date 25/Feb/21
//6.Inner class or neted class

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


class Circle{
	
	public:
		class Point{
			private: 
				double x;
				double y;
			public:
				void input(){
					cout<<"Input x: "; cin>>x;
					cout<<"Input y: "; cin>>y;
				}
				
				void output(){
					cout<<"("<<x<<", "<<y<<")"<<endl;
				}
				float distance(Point p){
					float d;
					d = sqrt( (x-p.x) * (x-p.x) + (y-p.y)*(y-p.y));
					return d;
				}
				
		};
		void input(){
			p.input();
			cout<<"Input radius: "; cin>> r;
		}
		
		void output(){
			p.output();
			cout<<"Radius= "<<r<<"\t"<<"Area= "<<area()<<endl;
		}
		float area() {
			return 3.14*r*r;
		}
		
	private:
		
		Point p;
		float r;
		
};


main(){
	Circle::Point a;
	Circle c;
	cout<<"input data of point: "<<endl;
	a.input();
	cout<<"Data of point: "<<endl;
	a.output();
	cout<<"\n\n\tInput data of circle"<<endl;
	c.input();
	cout<<"Data of circle: "<<endl;
	c.output();
	getch();
	
} 
