#include<stdio.h>

int minimum(int arr[], int beg, int end){

int curr = arr[beg];
int index;

for(int i = beg+1; i < end; i++){
	if(arr[i] < curr){
		curr = arr[i];
		index = i;
	}
}
return index;
}


void swap(int *x, int *y){

	int temp = *x;
	*x = *y;
	*y = temp;
}


void selSort(int arr[],int n){

	int min;
	for (int i = 0; i < n-1; i++)
	{
		min = minimum(arr, i, n);

		if(arr[min] < arr[i]){
		swap(&arr[i], &arr[min]);
		}	
	}
}

int print(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int arr[5] = {64, 25, 12, 22, 11};
	
	printf("Before sorting the array is:\n");
	print(arr, 5);

	selSort(arr, 5);

	printf("\nAfter sorting the array is:\n");
	print(arr,5);

	return 0;
}