 // C programming Sample Before Go To C++ Programming
 
 #include<iostream>
 #include<conio.h>
 #include<math.h>
 
 using namespace std;
 
 class Point{
 	
 	private:
 		int x;
 		int y;
 		
 	public:
 		void input(){
		 	cout<<"input x: "; cin>>x;
		 	cout<<"input y: "; cin>>y;
		}
		
		void output(){
		 	cout<<"("<<x<<","<<y<<")"<<endl;
		}
		
		float distance(Point p2){
		 	float d;
		 	d = sqrt((x-p2.x) * (x-p2.y) + (y-p2.y) * (y-p2.y));
		 	return d;
		}
 
 };
 
 
 float area(Point p1, Point p2, Point p3){
 	float s,p,a,b,c;
 	a=p1.distance(p2);
 	b=p1.distance(p3);
 	c=p2.distance(p3);
 	p=(a+b+c)/2;
 	s=sqrt(p*(p-a)*(p-b)*(p-c));
 	return s;
 }
 
 int main(){
 	Point a, b, c; //a is instanc variable
 	float d1;
 	
 	cout<<"Input data of point a: "<<endl;
 	a.input();
 	cout<<"Input data of point b: "<<endl;
 	b.input();
 	
 	cout<<"Data of point a:"<<endl;
 	a.output();
 	cout<<"Data of point b:"<<endl;
 	b.output();
 	
// 	d1 = a.distance(b);
// 	cout<<"Distance "<<d1<<endl;

	// Non Function

 	cout<<"Input data of point c: "<<endl;
 	b.input();
	
 	cout<<"Data of point c:"<<endl;
 	c.output();
 	
 	
 	d1 = area(a, b, c);
 	cout<<"Distance "<<d1<<endl;
 	

 	getch();
 }
