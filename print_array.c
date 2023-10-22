#include<stdio.h>

int main(){
	
	int arr[5];

	printf("Enter 5 numbers:\n");
	
	for(int i=0; i<5; ++i){
	scanf("%d", &arr[i]);
	}    	

	printf("The array is:\n");

	for(int i=0; i<5; ++i){
	printf("%d ", arr[i]);
	}

	printf("\nProgram Over\n");
}
