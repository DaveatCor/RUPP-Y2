// 02 Feb 2021

#include<conio.h>
#include<iostream>

using namespace std;

class Rectangle{
	
	//	Member Variable Or Field
	private:
		float length;
		float width;
	
	// Member Function
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
		
		// Accesser
		float getLength() { return length;}
		float getWidth() { return width;}
		void setLength(float l){
			length = l;
		}
		
		void setWidth(float w){
			width = w;
		}
		
};

int main(){
	
	Rectangle rec = Rectangle();
	
	rec.input();
	rec.output();
	cout<<endl<<rec.getLength();
	
	getch();
} 
