#include <stdio.h>
#define ll long long 

ll factorial(int num){

	if(num == 0)
		return 1;

	return num * factorial(num-1);
}


int main(int argc, char const *argv[])
{
	int ele;
	printf("Enter a number to calulate the factorial:\n");
	scanf("%d", &ele);

	int num = factorial(ele);

	printf("Factorial of %d is: %d\n", ele,num);

	return 0;
}