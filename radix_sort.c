#include <stdio.h>

int maximum(int arr[], int n){

	int max = 0;

	for(int i=0; i<n; i++){
		if(arr[i] > max)
			max = arr[i];
	}

	return max;
}

void countSort(int arr[], int n, int exp){

	int output[n];
	int count[10] = {0};

	for(int i=0; i<n; i++){
		count[(arr[i]/exp)%10]++;
	}

	for(int i=1; i<10; i++){
		count[i] += count[i-1];
	}

	for(int i=n-1; i>=0; i--){
		output[--count[(arr[i]/exp)%10]] = arr[i];
	}

	for(int i=0; i<n; i++){
		arr[i] = output[i];
	}
}

void radixSort(int arr[], int n){
	int max = maximum(arr, n);

	for(int exp = 1; max/exp>0; exp*=10){
		countSort(arr, n, exp);
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
	int arr[] = { 543, 986, 217, 765, 329 };

	printf("Before sortig the array is:\n");

	print(arr, 5);

	radixSort(arr, 5);

	printf("\nAfter sortig the array is:\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}









