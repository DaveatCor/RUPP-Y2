 // C programming Sample Before Go To C++ Programming
 
 #include<iostream>
 #include<conio.h>
 #include<math.h>
 
 using namespace std;
 
 struct Point{
 	int x;
 	int y;
 };
 
 void input(Point &p){
 	cout<<"input x: "; cin>>p.x;
 	cout<<"input y: "; cin>>p.y;
 }
 
 void output(Point &p){
 	cout<<"("<<p.x<<","<<p.y<<")"<<endl;
 }
 
 float distance(Point p1, Point p2){
 	float d;
 	d = sqrt((p1.x-p2.x) * (p1.x-p2.y) + (p1.y-p2.y) * (p1.y-p2.y));
 }
 
 int main(){
 	Point a, b; //a is instanc variable
 	float d1;
 	
 	cout<<"Input data of point a: "<<endl;
 	input(a);
 	cout<<"Input data of point b: "<<endl;
 	input(b);
 	
 	cout<<"Data of point a:"<<endl;
 	output(a);
 	cout<<"Data of point b:"<<endl;
 	output(b);
 	
 	d1=distance(a, b);
 	cout<<"Distance "<<d1<<endl;
 	getch();
 }
