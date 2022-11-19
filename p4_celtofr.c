//p#4 Write a C program to enter temperature in Celsius and convert it into Fahrenheit

#include<stdio.h>

main(){
	float c,fr;
	printf("Enter temperature in celcius : ");
	scanf("%f",&c);
	fr=c*9/5+32;
	printf("tempreature = %.2f F",fr);      
}

