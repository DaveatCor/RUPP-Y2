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
                  cout<<"\nElectricity total= "<<electricConsumption;
             }
             
             float getElectric(){
                  return electricConsumption;
             }
             
             void setElectric(float ele){
                   electricConsumption = ele;
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
                  
                  cout<<"\nWater total= "<<waterConsumption;
             }
             
             float getWater(){
                  return waterConsumption;
             }
             
             void setWater(float water){
                   waterConsumption = water;
             }
             
      
             
};

class Customer: public Electricity, public Water {
             
      private:
              int id;
              char name[20];
      
      public:
             
             Customer(int i, char *n, float elec, float water){
                        id = i;
                        strcpy(name, n);
                        Electricity::setElectric(elec);
                        Water::setWater(water);
                        
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
             
             int getId() {
                 return id;    
             }
};

void findMostUseElectric(Customer cus[], int size){
     int i = 1;
     Customer tmp = cus[0];
     for ( ; i < size; i++){
         if (cus[i].getElectric() > tmp.getElectric()){
            tmp = cus[i];
         } 
     }
     
     cout<<"\nUser that use a lot of electric\n";
     tmp.output();
}

void findMostUseWater(Customer cus[], int size){
     int i = 1;
     Customer tmp = cus[0];
     for ( ; i < size; i++){
         if (cus[i].getWater() > tmp.getWater()){
            tmp = cus[i];
         } 
     }
     
     cout<<"\nUser that use a lot of water\n";
     tmp.output();
}

void findMostUseElectricNWater(Customer cus[], int size){
     
     Customer tmp1 = cus[0];
     Customer tmp2 = cus[0];
     //Find water
     for ( int i = 1; i < size; i++){
         if (cus[i].getWater() > tmp1.getWater()){
            tmp1 = cus[i];
         } 
     }
     
     // Find electric
     for ( int i = 1; i < size; i++){
         if (cus[i].getElectric() > tmp2.getElectric()){
            tmp2 = cus[i];
         } 
     }
     
     if (tmp1.getId() == tmp2.getId()){
        cout<<"\n\nUser that use a lot of water and elect:\n";
        tmp1.output();
     } else {
       
        cout<<"\n\nUser that use a lot of water and elect:\n";
        cout<<"User not found";
     }
     
}

int main(){
     Customer cus[3] = {
              Customer(1, "Daveat", 300.0, 200.0),
              Customer(2, "God", 500.0, 500.0),
              Customer(3, "Boy", 200.0, 100.0),
     };
     
     for (int i = 0; i< 3; i++){
            cus[i].output();
            cout<<endl;
     }
     
     cout<<"\nResult: \n";
     
     findMostUseElectric(cus, 3);
     
     findMostUseWater(cus, 3);
     
     findMostUseElectricNWater(cus, 3);
     
     getch();
}
