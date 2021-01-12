#include<iostream>
#include<stdio.h>
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

int Sum1(int n){
	int factorial;
	int temp;
	for (int i = 1; i <= n; i++){
		temp = 1;
		for (int j = 1; j <= i; j++){
			temp *= j;
		}
		factorial += temp;
	}
	return factorial;
}

void Sum2(int n){
	int factorial;
	int temp;
	for (int i = 1; i <= n; i++){
		temp = 1;
		for (int j = 1; j <= i; j++){
			temp *= j;
		}
		factorial += temp;
	}
	printf("\nResult= %d", factorial);
}

int Sum3(){
	
	int factorial;
	int temp;
	int n;
	
	cout<<"Input number of factorial: ";
	cin>>n;
	
	for (int i = 1; i <= n; i++){
		temp = 1;
		for (int j = 1; j <= i; j++){
			temp *= j;
		}
		factorial += temp;
	}
	return factorial;
}

void Sum4(){
	
	int factorial;
	int temp;
	int n;
	
	cout<<"Input number of factorial: ";
	cin>>n;
	for (int i = 1; i <= n; i++){
		temp = 1;
		for (int j = 1; j <= i; j++){
			temp *= j;
		}
		factorial += temp;
	}
	printf("\nResult= %d", factorial);
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
	
	int n, choose;
	int factorial = 0;
	
	time_travel_f: // Options
	cout<<"\nUse function\n";
	
	cout<<"(1)int Sum1(int n)\n";
	cout<<"(2)void Sum2(int n)\n";
	cout<<"(3)int Sum3()\n";
	cout<<"(4)void Sum4()\n";
	cout<<"(0)Exit program\n";
	cout<<"Choose: "; cin>>choose;
	
	switch(choose){
		case 0: 
			cout<<"\n\n\tThank you for using our program";
			cout<<"\n\t\tHave a nice day\n\n";
			exit(0);
		case 1: 
		
			cout<<"Input number of factorial: ";
			cin>>n;
			factorial = Sum1(n);
			printf("\nResult= %d", factorial);
			break;
		case 2: 
			cout<<"Input number of factorial: ";
			cin>>n;
			Sum2(n);
			break;
		case 3: 
			factorial = Sum3();
			printf("\nResult= %d", factorial);
			break;
			
		case 4: 
			Sum4();
			break;
			
		default: 
		cout<<"\nPlease choose correctly options";
		
		controlSystem();
		goto time_travel_f;
	}
	
	
	controlSystem();
	goto time_travel_f;
}
