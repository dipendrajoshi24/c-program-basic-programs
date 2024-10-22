// WACP to performance airthmetic like(sum,product,float,quotient)
#include<stdio.h>
int main(){
	int num1,num2,diffrence,product;
	float quotient;
	
	printf("Enter the two integers:");
	scanf("%d %d",&num1,&num2);
	
	int sum=num1+num2;
	diffrence=num1-num2;
	product=num1*num2;
	quotient=(float)num1/num2;
	
	printf("Sum:%d\n",sum);
	
	printf("Diffrence:%d\n",diffrence);
	
	printf("Product:%d\n",product);
	
	printf("Quotient:%.2f\n",quotient);
	
	return 0;	
}
