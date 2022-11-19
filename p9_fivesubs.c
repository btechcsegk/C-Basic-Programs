//p#9 Write a C program to enter marks of five subjects and calculate total, average and percentage

#include<stdio.h>

main(){
	int s1,s2,s3,s4,s5,tot;
	float avg,per;
	printf("Enter marks of maths ,chemistry ,physics ,english and computer science : ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=s1+s2+s3+s4+s5;
	avg=tot/5.0;
	per=(avg/500)*100;
	printf("Your \ntotal marks: %d\naverage marks: %.2f\npercentage: %.2f%c",tot,avg,per,37);
	//use ascii value 37 for % sign
}

