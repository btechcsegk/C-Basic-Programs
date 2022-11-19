//p#8 Write a C program to enter base and height of a triangle and find its area

#include<stdio.h>

main(){
	float b,h,area;
	printf("Enter base and height of triangle respectively : ");
	scanf("%f%f",&b,&h);
	area=0.5*b*h;
	printf("area of triangle is %.2f",area);
}

