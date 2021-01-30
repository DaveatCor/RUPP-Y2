#include<iostream>
#include<conio.h>
using namespace std;


float factorial(int n){
	if (n == 1) return 1;
	return n*factorial(n-1);
}

int fibonanci(int n){ // Not yet understand
	if (n == 1 || n==2){
		return (1);
	}else {
		return (fibonanci(n-1) + fibonanci(n - 2));
	}
}

int sum_of_n(int n){ 
	if (n == 1) return 1;
	else {
		return n+sum_of_n(n-1);
	}
}

int a_pow_n(int a, int n){
	if (n == 1) return a;
	else {
		return a * a_pow_n(a, n-1);
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
	cout<<"\n#      Welcome to Daveat Corn program      #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#               Mathematic                 #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n#                                          #";
	cout<<"\n############################################";
	
}

int main(){
//	int n = 3; int a = 2; int fact;
//	cout<<"Factorial\n";
////	cin>>n;
////	fact = findEachFact(n);
////	fact = fibonanci(n, n);
//	fact = AandN(a, n);
//	cout<<"My factorial: "<<fact;
//	getch();
	
	
	
	initializeDisplay();
	controlSystem();
	
	int n, choose;
	float fact = 0;
	int a, result;
	
	time_travel_f: // Options
	cout<<"\nUse function\n";
	
	cout<<"(1)Factorial\n";
	cout<<"(2)Fibonanci\n";
	cout<<"(3)Sum ofnumber\n";
	cout<<"(4)A pow N\n";
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
			fact = factorial(n);
			printf("\nResult= %f", fact);
			break;
			
		case 2: 
			cout<<"Input number of factorial: ";
			cin>>n;
			result = fibonanci(n);
			printf("\nResult= %d", result);
			break;
			
		case 3: 
			cout<<"Input N: ";
			cin>>n;
			result = sum_of_n(n);
			printf("\nResult= %d", result);
			break;
			
		case 4: 
			cout<<"Input a: ";
			cin>>a;
			
			cout<<"Input n: ";
			cin>>n;
			result = a_pow_n(a, n);
			
			printf("\nResult= %d", result);
			break;
			
		default: 
		cout<<"\nPlease choose correctly options";
		
		controlSystem();
		goto time_travel_f;
	}
	
	
	controlSystem();
	goto time_travel_f;
	getch();
}
