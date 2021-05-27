#include<iostream>
#include<conio.h>
#include<math.h> 
using namespace std;

class Rectangle {
      private:
              float length;
              float width;
      public: 
              Rectangle(float l, float w){
                          length = l;
                          width = w;
              }
              
              // Unary operator
              Rectangle operator++(){
                        return Rectangle(++length, ++width);
              }
              
              Rectangle operator++(int){
                        return Rectangle(++length, ++width);
              }
              
              // Output operator
              friend ostream& operator<<(ostream &out, Rectangle &p){
                     out<<p.length<<"\t\t"<<p.width<<"\t";
                     return out;       
              }
              
              // Input operator
              
              friend istream& operator>>(istream &in, Rectangle &p){
                     cout<<"Length="; in>>p;
                     cout<<"Width="; in>>p.width;
              }
              
              void display(){
                   cout<<"\nWidth= "<<width;
                   cout<<"\nLength= "<<length;     
              }

};

main(){
       Rectangle rec(1, 2);   
       rec.display();
       ++rec;  
       rec.display();
       rec++;  
       rec.display();
       
       cout<<rec;
       
       getch();
}
