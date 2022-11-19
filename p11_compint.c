//p#11 Write a C program to enter P, T, R ,n and calculate Compound Interest

#include<stdio.h>

main(){
	int n;
	float pamt,rate,time,ci,amt;
	printf("Enter principle amount ,rate ,time period and number of times interest applied : ");
	scanf("%f%f%f%d",&pamt,&rate,&time,&n);
	amt=pamt*pow((1 + rate/(n*100)),(n*time));
	ci=amt-pamt;
	printf("compound interest = %.2f",ci);
}


