//p#6 Write a C program to convert days into years, weeks and days

#include<stdio.h>

main(){
	int days,weeks,years;
	printf("Enter number of days : ");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	weeks=days/7;
	days=days%7;
	
	printf("There will be %d years %d weeks %d days",years,weeks,days);
}

