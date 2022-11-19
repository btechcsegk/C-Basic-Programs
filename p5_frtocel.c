//p#5 Write a C program to enter temperature in Fahrenheit and convert to Celsius

#include<stdio.h>

main(){
	float c,fr;
	printf("Enter temperature in fahrenheit : ");
	scanf("%f",&fr);
	c=(fr-32)*5.0/9;
	printf("tempreature = %.2f C",c);      
}

