// WACP to find largest of two number
#include<stdio.h>
int main()
{
	int num1,num2,largest;
	
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);
	
	largest=(num1>num2) ? num1:num2;
	
	printf("The largest number is : %d\n",largest);
	
	return 0;
}
