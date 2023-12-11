#include <stdio.h>

int lsearch(int arr[], int key, int n){

	int flag = 0;
	int index;

	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == key){
			flag = 1;
			index = i;
		}
	}

	if(flag == 1) return index;

	else return -1;
}

int main(int argc, char const *argv[])
{
	int arr[6] = {1,23,45,67,21,2};
	
	printf("Enter key to search\n");

	int key;

	scanf("%d", &key);

	int index = lsearch(arr, key, 6);

	if(index == -1) printf("Key not found.\n");
	else printf("%d is found at index %d.", key, index);
	return 0;
}