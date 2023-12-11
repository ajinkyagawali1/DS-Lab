#include <stdio.h>

int bsearch(int arr[], int n, int key){
	int beg = 0;
	int end = n-1;
	
	int mid;

	while(end>=beg){
		mid = (beg+end)/2;

		if(arr[mid] == key){
			return mid;
		}

		else if(key > arr[mid]){
			beg = mid+1;
		}
		else{
			end = mid-1;
		}
	}

	return -1;
}

int print(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int key;

	print(arr, 10);

	printf("\nEnter key to search\n");
	scanf("%d", &key);

	int index = bsearch(arr, 10, key);

	if(index == -1){
		printf("Key not found\n");
	}
	else{
		printf("%d is found at index %d\n",key, index);
	}
	return 0;
}