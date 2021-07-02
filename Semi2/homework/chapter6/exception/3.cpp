 #include<iostream>
 #include<conio.h>
 #include<string.h>
 using namespace std;
 class Gender {
 	public:
 		Gender(){
 			cout<<"Error: \n";
		}
		
		const char* message(){
			return "Input wrong gender\n Input should be 'M' or 'F'";
		}
 };
 
 char* input(){
 	char c[10];
// 	gets(c);
	cout<<strcpy(c, "M");
 	cout<<strcmp("M", "M");
// 	if (c != "M" || c != "F"){
// 		throw Gender();	
//	} else {
//		return c;
//	}
 }
 
 main(){
 	char* ch;
 	input();
 	
// 	again:
// 		cout<<"Input (-1) = Exit\n";
// 		cout<<"Input gender: ";
//	 	try {	
////	 		strcpy(ch, input());
//			cout<<input();
////	 		cout<<ch<<"Correct";
//		} catch (Gender e){
//			cout<<e.message();
//		}
//		getch();
//		if (ch != "-1") goto again;
	
 	getch();
 }
