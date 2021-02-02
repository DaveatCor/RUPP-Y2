// 02 Feb 2021

#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle{
	private:
		float length;
		float width;
	
	public:
		void input(){
			cout<<"Input length: "; cin>>length;
			cout<<"Input width: "; cin>>width;
		}
		
		void output(){
			cout<<"\nLength: "<<length;
			cout<<"\nWidth: "<<width;
			cout<<"\nArea: "<<area();
		}
		
		float area(){
			return length*width;
		}
		
};

int main(){
	
	Rectangle rec = Rectangle();
	
	rec.input();
	rec.output();
	
	getch();
} 
