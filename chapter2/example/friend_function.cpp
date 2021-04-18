// Frind Function 
// Date 16/Mar/21

#include<iostream.h>
#include<conio.h>
 
class Fri{
 	private:
 		float x, y;
 	public:
 		void input(){
 			cout<<"Input x: "; cin>>x;
			cout<<"Input y: "; cin>>y;	
		}
		
		friend float sum(Fri f){
			return f, x+f.y;
		}
		
		friend void output(Fri f);
		friend class B;
 };
 
 
 void Fri::output(Fri f){
 	cout<<"X= "<<f.x<<"\t";
 	cout<<"Y= "<<f.y<<"\t";
 	cout<<"Sum= "<<sum(f)<<endl;
 }
 
 class B{
 	private:
 		int a, b;
 		Fri f;
 	public:
 		friend class Fri;
 		
 		void Display(){
 			
		}
 };
 
 void main(){
 	Fri b;
 	b.input();
 	output(b);
 	getch();
 }
