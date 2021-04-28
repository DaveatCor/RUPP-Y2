#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void whileFactorial(int n, long *factorial){
	int temp;
	int i = 1;
	while(i <= n) {
		temp = 1;
		int j = 1;
		while (j <= i){
			temp *= j;
			j++;
		}
		*factorial += temp;
		i++;
	}
}

void dowhileFactorial(int n, long *factorial){
	int temp;
	int i = 1;
	do {
		temp = 1;
		int j = 1;
		do {
			temp *= j;
			j++;
		} while(j <= i);
		*factorial += temp;
		i++;
	}while(i <= n);
}

void forFactorial(int n, long *factorial){
	int temp;
	for (int i = 1; i <= n; i++){
		temp = 1;
		for (int j = 1; j <= i; j++){
			temp *= j;
		}
		*factorial += temp;
	}
}

void controlSystem(){
	cout<<"\n\nPress anykey to continue...";
	getch();
	system("cls");
}

void initializeDisplay(){
	
	cout<<"\n############################################";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#      Welcome to Corn Daveat program      #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#             Factorial number             #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n############################################";
	
}

int main(){
	
	initializeDisplay();
	controlSystem();
	
	time_travel_f: // Factorial
	int n, choose;
	long factorial = 0;
	cout<<"Input number of factorial: ";
	cin>>n;
	
	time_travel_o: // Options
	cout<<"\nOptions\n";
	cout<<"(1)While loop\n";
	cout<<"(2)Do while loop\n";
	cout<<"(3)For loop\n";
	cout<<"(0)Exit program\n";
	cout<<"Choose: "; cin>>choose;
	
	switch(choose){
		case 0: 
			cout<<"\n\n\tThank you for using our program";
			cout<<"\n\t\tHave a nice day\n\n";
			exit(0);
		case 1: 
			whileFactorial(n, &factorial);
			break;
		case 2: 
			dowhileFactorial(n, &factorial);
			break;
		case 3: 
			forFactorial(n, &factorial);
			break;
			
		default: 
		cout<<"\nPlease choose correctly options";
		
		controlSystem();
		goto time_travel_o;
	}
	
	
	
	cout<<"\nResult= "<<factorial;
	controlSystem();
	goto time_travel_f;
}
