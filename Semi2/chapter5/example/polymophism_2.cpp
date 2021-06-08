// Date 08/Jun/21
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Person{
             
             private:
                     int id; char name[20];
             public:
                     Person(int i = 0, char *n = "abc"){
                                id = i;
                                strcpy(name, n);
                     }              
                     
                     virtual void ownerInput(){}
                     
                     virtual void ownerOutput(){}
                     
                     void input(){
                             cout<<"Id: "; cin>>id;
                             cout<<"Name: "; 
                             cin.seekg(0, ios::end); 
                             cin.clear();
                             cin.get(name, 20);
                             ownerInput();
                     }
                     virtual void output(){
                             cout<<"Id= "<<id;
                             cout<<"\nName= "<<name;
                             ownerOutput();
                     }
                     
                     
};

class Salary_Income:public virtual Person{
             
             private:
                     float salary;
             public:
                     Salary_Income(int i = 0, char *n = "abc", float s = 0) : Person(i, n), salary(s) {}
                     
                     virtual void ownerInput(){
                             cout<<"Salary: "; cin>>salary;
                     }
                     
                     virtual void ownerOutput(){
                             cout<<"\t"<<Salary_Income::income();             
                     }
                     
                     virtual float income(){
                             return salary*(1-0.05);
                     }
                     
                     
};


class Wage_Income:public virtual Person{ // Use Virtual
             
             private:
                     float hour, rate;
             public:
                     Wage_Income(int i = 0, char *n = "abc", float h = 0, float r = 0) : Person(i, n), 
                                hour(h),
                                rate(r){}            
                     
                     virtual void ownerInput(){
                             cout<<"Hour: "; cin>>hour;
                             cout<<"Rate: "; cin>>rate;
                     }
                     
                     virtual void ownerOutput(){
                             cout<<"\t"<<Wage_Income::income();             
                     }
                     
                     virtual float income(){
                             return hour*rate;
                     }
                     
                     
};


class Salary_Wage_Income:public Salary_Income, public Wage_Income{ // Use Virtual
             
             private:
                     float salary,hour , rate;
             public:
                     Salary_Wage_Income(int i = 0, char *n = "abc", float s = 0, float h = 0, float r = 0) : 
                                            Person(),
                                            Salary_Income(i, n, s), 
                                            Wage_Income(i, n, h, r){}
                     
                     virtual void ownerInput(){
                             Person::ownerInput();
                             Salary_Income::ownerInput();
                             Wage_Income::ownerInput();
                             
                             cout<<"Hour: "; cin>>hour;
                             cout<<"Rate: "; cin>>rate;
                     }
                     
                     virtual void ownerOutput(){
                             Person::ownerOutput();
                             Salary_Income::ownerOutput();
                             Wage_Income::ownerOutput();            
                             
                             cout<<"\t"<<Wage_Income::income(); 
                     }
                     
                     virtual float income(){
                             return Salary_Income::income() + Wage_Income::income();
                     }
                     
                     
};

main(){
      Person *a[8] = {
             new Person(1, "Dara"),
             new Salary_Income(2, "Chan", 300),
             new Wage_Income(3, "Bopha", 75, 5),
             new Salary_Income(4, "Veasna", 600),
             new Salary_Wage_Income(5, "Ratha", 200, 57, 7),
             new Wage_Income(6, "Bunna", 82, 6),
             new Person(7, "Vutha"),
             new Salary_Income(6, "Mary", 450)
      };
      
      for(int i = 0; i< 8; i++){
              a[i]->output();
      }
      
      getch();
}
