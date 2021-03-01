 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 class Mathematic {
 	
 	private:
 		int a; 
 		int b;
 	
 	public:
 		void input(){
 			cout<<"Input a: "; cin>> a;
			cout<<"Input b: "; cin>> b;
		}
		
 		void output(){
 			cout<<"A: "<<a<<endl; 
			cout<<"B: "<<b;	
		}
		
		//Accesstor
		int getA(){
			return a;
		}
		int getB(){
			return a;
		}
		
		
 		int pgcd(){
 			while(a != b){
 				if( a > b){
 					a -= b;	
				} else {
					b -= a;
				}
			}
		}
		
		int ppcm(){
			return (a*b)/pgcd();
		}
 };
 
 
 main(){
 }
