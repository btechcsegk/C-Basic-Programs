//p#7 Write a C program to enter two angles of a triangle and find the third angle

#include<stdio.h>

main(){
	int a,b,c;
	printf("Enter any two angles of triangle : ");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("third angle of triangle is %d",c);
}

