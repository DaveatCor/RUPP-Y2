#include<stdio.h>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	
	// Data Structure
	int a, b, c;
	int delta;
	int x1, x2;
	
	printf("\t\t\t\tQuadratic equations\n\n");
	printf("Input a: "); scanf("%d", &a);
	printf("Input b: "); scanf("%d", &b);
	printf("Input c: "); scanf("%d", &c);
	
	printf("\nEquation = %dx2\n", a);
	
	b>0 ? printf(" +%dx", b) : printf(" %d", b);
	c>0 ? printf(" +%dc=0", c) : printf(" +%d=0", c);
	
	delta = ((b)*(b)) - (4*a*c); 
		 
	printf("\nDelta = %d\n\n", delta);
	
	//Algorithm
	if(delta > 0){
		printf("Delta greater than 0\n");
		x1 = (-(b)-sqrt(delta)) / (2/a);
		x2 = (-(b)+sqrt(delta)) / (2/a);
	}else {
		
	}
	
	printf("\nx1= -b - v(b2 - 4ac) 2a = %d", x1);
	printf("\nx2= -b + v(b2 - 4ac) 2a = %d", x2);
	getch();
}
