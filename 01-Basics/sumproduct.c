#include <stdio.h>

int main()

{
	/* This program asks the user for two integer values then displays their sum */
	int value1,value2,sum;
	printf("\nEnter two integer values:\n");
	scanf("%d%d",&value1,&value2);
	sum= value1 + value2;
	printf("Sum=%d\n",sum);
	
	/* This program asks the user for two integer values then displays their product */
	int num1,num2,product;
	printf("\nEnter two integer values:\n");
	scanf("%d%d",&num1,&num2);
	product= num1*num2;
	printf("Product=%d\n",product);
	
	return 0;

}
