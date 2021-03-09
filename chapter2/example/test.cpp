 // Construtor 09/Mar/21
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 class Test{
 	private:
 		int x;
 		
 	public:
 		Test() {
 			this->x = 10;	
		}
		
		Test(int xx){
			this->x=xx;
		}
		//Copy constructor
		Test(Test &other){
			this->x = other.x;
		}
		//Constructor
		~Test(){
			cout<<"Object x="<<x<<" at position" <<this<<" was destroyed"<<endl;
		}
		
		void set(int xx){
			this->x = xx;
		}
		int getX() {
			return this->x;
		}
 };
 
 main(){
 	Test b1;
 	Test b2(25);
 	Test b3(b2);
 	cout<<"b1 has value "<<b1.getX()<<endl;
 	cout<<"b2 has value "<<b2.getX()<<endl;
 	cout<<"b3 has value "<<b3.getX()<<endl;
 	b1.set(100);
 	cout<<"b1 has value "<<b1.getX()<<endl;
 	Test* p;
 	cout<<"*P has value "<<p->getX()<<endl;
 	
 	//Constructor
 	delete p;
 }
