// program for sum of three num and average of nums

#include<stdio.h>
int main(){
	
	int a,b,c;
	int sum,average;
	
	printf("Enter any three integers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	sum=a+b+c;
	
	average =sum/3;
	
	printf("sum is %d,sum");
	printf("average is %d",average);
	
	return 0;
	
}
