#include<iostream>
#include<conio.h>
using namespace std;

class Products {

      private:
              int code;
              char name[20];
              float price;
              int qtt;
      public:
             Products(){}
             Products(int c, char n[], float p, int q){
                        code = c;
                        strcpy(name, n);
                        price = p;
                        qtt = q;
             }
              
             // Operator >>    
             friend istream& operator>>(istream &in, Products &p){
                  cout<<"Input code= "; in>>p.code;
                  cout<<"Input name= "; 
                  in.seekg(0, ios::end);
                  in.clear();
                  in.get(p.name, 20);
                  cout<<"Input price= "; in>>p.price;
                  cout<<"Input qauntity= "; in>>p.qtt;
             }
             
             // Operator <<
             friend ostream& operator<<(ostream &out, Products &p){
                    out<<"\nCode= "<<p.code;
                    out<<"\nName= "<<p.name;
                    out<<"\nPrice= "<<p.price;
                    out<<"\nQuantity= "<<p.qtt; 
             }
             
             // Operator -
             int operator-(Products &p){
                      return qtt - p.qtt;
             }
};

main(){
       Products p, p1, p2;
       cin>>p; 
       cin>>p1;
       
       cout<<p-p1;
       
       getch();
}
