#include<iostream>
#include<conio.h>
using namespace std;

class Electricity {
      
      private:
            float electricConsumption;
            
      public:
             void input(){
                  cout<<"Input electricity total= ";
                  cin>>electricConsumption;
             }
             
             void output(){
                  cout<<"Electricity total= "<<electricConsumption;
             }
             
             float getElectric(){
                  return electricConsumption;
             }
};

class Water {
      
      private:
              float waterConsumption;  
              
      public:
             void input(){
                  cout<<"Input water total= ";
                  cin>>waterConsumption;
             }
             
             void output(){
                  
                  cout<<"Water total= "<<waterConsumption;
             }
             
             float getWater(){
                  return waterConsumption;
             }
             
};

class Customer: private Electricity, private Water {
      
      public:
             
             Customer(int id, char *name, float ){
                        id = 1;
             }
             
             void input(){
                  cout<<"Input id= ";
                  cin>>id;
                  
                  cout<<"Input name= ";
                  // Clear Buffer
                  cin.seekg(0, ios::end); cin.clear();
                  cin.get(name, 20);
                  
                  Electricity::input();
                  
                  Water::input();
                  
             }
             
             void output(){
                  
                  cout<<"Id: "<<id;
                  cout<<"\nName: "<<name;
                  
                  Electricity::output();
                  Water::output();
             }
             
      private:
              int id;
              char name[20];
};

void findMostUseElectric(Customer cus[], int size){
     int temp;
     //for (int i = 0; i < size; i++){
//         cus[i].electricity
//     }
}

void findMostUseWater(){

}

void findMostUseElectricNWater(){

}

 main(){
     
}
