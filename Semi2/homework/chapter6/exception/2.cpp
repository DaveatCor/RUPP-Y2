#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Digit{
	public:
		Digit(){
			cout<<"Error: ";
		}
		
		const char* getMessage(){
			return "This input does not digit";
		}
};

int input(){
	int n;
	cin>>n;
	if (n < 0){
		throw Digit();
	}
	return n;
}

main(){
	int response;
	Redo: 
	cout<<"-1 to exit\n";
	cout<<"Please input digit: ";
	try {	
		response = input();		
		cout<<response;
	} catch (Digit e){
		cout<<e.getMessage();
	}
	getch();
	if (response == -1){
		cout<<"Thank you for using our program!";
	} else {
		goto Redo;	
		system("CLS");
	}
}
