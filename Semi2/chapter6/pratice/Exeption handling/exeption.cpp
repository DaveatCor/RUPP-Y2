#include<iostream>
#include<conio.h>
using namespace std;

class Devide {
	public:
		Devide(){
			cout<<"Error: ";
		}
		
		const char* getMessage() {
			return "Devide by zero";
		}
};

float quote(int a, int b){
	if (b==0) throw Devide();
	return a/b;
}

main(){
	int x, y, result;
	
	while(1){
		cout<<"input x and y: "; cin>>x>>y;
		try {
			result =quote(x, y);
			cout<<"Result= "<<result<<endl;
		} catch (Devide e){
			cout<<e.getMessage()<<endl;
		}
	}
	
	getch();
}
