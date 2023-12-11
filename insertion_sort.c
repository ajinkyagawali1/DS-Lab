#include <stdio.h>

void inSort(int arr[], int n){

	for (int i = 1; i < n; ++i)
	{
		int curr = arr[i];
		int j = i-1;

		while(j>=0 && arr[j] > curr){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = curr;
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
	int num[5] = {2,6,12,7,5};

	printf("Before sorting the array is:\n");
	print(num, 5);

	inSort(num, 5);

	printf("\nAfter sorting the array is:\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", num[i]);
	}
	return 0;
}