//p#2 Write a C program to enter length and breadth of a rectangle and find its area

#include<stdio.h>

main(){
	float l,b,area;
	printf("Enter length and breadth of rectangle : ");
	scanf("%f%f",&l,&b);
	area=l*b;
	printf("Area of rectangle = %.2f",area);
}

