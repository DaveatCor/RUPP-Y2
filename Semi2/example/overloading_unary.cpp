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
              
              Rectangle operator++(){
                        return Rectangle(++length, ++width);
              }
              
              Rectangle operator++(int){
                        return Rectangle(++length, ++width);
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
       
       getch();
}
