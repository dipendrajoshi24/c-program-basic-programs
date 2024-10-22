//first 50 natural number print
#include<stdio.h>
#include<math.h>

int main(){
	int n=500;
	int sum;
	sum= n* (n+1) /2;
	
	printf("sum of the first %d natural numbers is %d\n",n,sum);
	return 0;
}
