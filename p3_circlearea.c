//p#3 Write a C program to enter radius of a circle and find its diameter, circumference and area

#include<stdio.h>

main(){
	float r,dia,cir,area;
	printf("Enter radius of the circle : ");
	scanf("%f",&r);
	dia=2*r;
	cir=2*3.14*r;
	area=3.14*r*r;
	printf("Diameter = %.2f & Circumference = %.2f &  Area = %.2f",dia,cir,area);
}

