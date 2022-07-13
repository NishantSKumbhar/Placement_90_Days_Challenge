#include <stdio.h>

int iserted(int arr[], int n, int a_n, int val){
	if(a_n >= n){
		return -1;
	}

	arr[a_n] = val;
	printf("\nYS\n");
	return 1;	
}

int main(){

	int arr[20] = {10, 2, 34, 56, 23, 56, 75, 44,22, 76};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	int a_n = 0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] > 0 || arr[i] < 0){
			a_n++;
		}
	}
	int val = 99;
	int i = iserted(arr, n, a_n, val);
	if(i){
		printf("\nSuccefully Inserted !\n");
		for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
		}
	}else{
		printf("\nSorry , Array is Full");
	}
	return 0;
}