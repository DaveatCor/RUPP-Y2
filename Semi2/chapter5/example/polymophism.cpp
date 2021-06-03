#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Shape {
      public:
             enum objectType{RECTANGLE, CIRCLE, TRIANGLE};
             virtual void input()=0;
             virtual void output()=0;
             virtual float area()=0;
             virtual objectType object() = 0;
};

class MyRectangle:public Shape{
                       
      private:
             float length, width;
      public:

             MyRectangle(float l = 0, float w=0){
                             length = l;
                             width = w;
             }

             virtual void input(){
                     cout<<"Width = "; cin>>width;
                     cout<<"Length = "; cin>>length;
             }
             virtual void output(){
                     cout<<width<<"\t"<<length;
             }
             
             virtual float area(){return length*width;}
             
             virtual objectType object(){return RECTANGLE;}
};

class Circle:public Shape{
                    
      private:
              float r;
              
      public:
             Circle(float r1=0){r = r1;}
             
             virtual void input(){
                     cout<<"Radius: "; cin>>r;
             }
             virtual void output(){
                     cout<<r<<"\t"<<area();
             }
             virtual float area(){return 3.14*r;}
             virtual objectType object(){return CIRCLE;}
};

class Triangle:public Shape {
                      
      float a, b, c;
      public:
             Triangle(float a1=0, float b1=0, float c1=0) {
                            a=a1; b= b1; c=c1;
             }    
             
             virtual void input(){
                     cout<<"Sinze1 = "; cin>>a;
                     cout<<"Sinze2 = "; cin>>b;
                     cout<<"Sinze3 = "; cin>>c;
             }
             virtual void output(){
                     cout<<a<<"\t"<<b<<"\t"<<c;
             }
             virtual float area(){
                     float p, s;
                     p = (a+b+c) / 2;
                     s = sqrt(p* (p-a) * (p-b) * (p-c));
                     return s;
             }
             
             virtual objectType object(){return TRIANGLE;}
}; 

// Date 03/Jun/21
float totalArea(Shape *a[], int n){
      float s;
      for(int i = 0; i < n; i++){
              // Arrow Keyword Use With Pointer
              s += a[i]->area();
      }
      return s;
}

// Date 03/Jun/21
float maxArea(Shape *a[], int n){
      float max = a[0]->area();
      for(int i = 1; i < n-1; i++){
              // Arrow Keyword Use With Pointer
              if (max < a[i]->area()){
                 max = a[i]->area();
              }
      }
      return max;
}

void inputAll(Shape *a[], int n){
     char select;
     for(int i = 0; i<n; i++){
             cout<<"Rectangle(r), Circle(c), Triangle(t): "; cin>>select;
             switch(select){
                            
                            case 'r': a[i] = new MyRectangle();
//                                      a[i]->input();
                                      break;
                            case 'c': a[i] = new Circle();
                                      a[i]->input();
                                      break;
                            case 't': a[i] = new Triangle();
                                      a[i]->input();
                                      break;
             }
     }                    
}

main(){
       Shape *a[8] = {
             new Circle(35),
             new MyRectangle(20, 10),
             new Triangle(13, 9, 12),
             new Circle(78),
             new MyRectangle(40, 25),
             new Circle(45),
             new Triangle(19, 25, 14),
             new MyRectangle(35, 13)
       };
       
       for(int i =0; i<8; i++){
//               if(a[i]->object()==Shape::TRIANGLE){
               cout<<a[i]->area();
               cout<<endl;
               }
               
       cout<<"Total area: "<<totalArea(a, 8);
       
       // Find Max
       cout<<"\nMax area: "<<maxArea(a, 8);
       getch();
}
