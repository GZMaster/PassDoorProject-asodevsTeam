#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//#include <string,h>
#include <ctype.h>

/*This Program solves for the values of the quadratic equation*/
int main() {
	// x,y,z are the variables for the quadratic formula
	int x, y, z, d;
	
	// rt1 represent the first root and rt2 represent the  second root of the quadratic equation
	float rt1, rt2;
	
	// Line 13, 14 and 15 delares the integers for variables x,y and z
	printf("x= ");
	
	scanf(" %d",&x);
	
	printf("y= ");
	
	scanf(" %d",&y);
	
	printf("z= ");
	
	scanf(" %d",&z);
	
	// Line 18 delares the formula bsquared - 4ac 
	d = (y*y)-(4 *x*z);
	
	// Line 21 and 22 solves for the roots of the quadratic equation
	rt1 = (-y + sqrt(d))/(2*x);
	rt2 = (-y- sqrt(d))/(2*x);
	
	// Line 25 prints out the the solution of the quadratic equation
	if(d>=1){
		 printf ("The roots of the equation are: %.9f and %.5f\n",rt1, rt2);
	}
	else{
		printf("Wrong values\n");
	}
	
	printf("Cpe is %.5f years old\n",0.34654267);
	
	char yahoo[20] ="This is NUESA";
	
 
   
	 
	printf("%s", yahoo);
	
	
	char name[20];
	
	char level[20];
	int age;
	
	printf("what is your name:\n");
	scanf("%s",name);
	
	printf("What is your level:\n");
	scanf("%s",level);
	
	printf("What is your age:\n");
	scanf("%d",&age);
	
	printf("These are your details- %s. %s, %d",name, level, age);
	
	
	 
	return 0;
}



