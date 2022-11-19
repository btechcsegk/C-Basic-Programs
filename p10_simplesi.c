//p#10 Write a C program to enter P, T, R and calculate Simple Interest

#include<stdio.h>

main(){
	float pamt,rate,time,si;
	printf("Enter principle amount ,rate and time period : ");
	scanf("%f%f%f",&pamt,&rate,&time);
	si=(pamt*rate*time)/100;
	printf("Simple interest = %.2f",si);
}


