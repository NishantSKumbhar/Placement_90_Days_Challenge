#include <stdio.h>


int findElement(int arr[], int n, int key){
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}


int main(){

	int arr[] = {10, 3, 45, 2, 12, 455, 1212, 121, 0 , 76, 83};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 02;

	int position = findElement(arr, n, key);

	if(position == -1){
		printf("Element Not Found!");
	}else{
		printf("Element Found at Location : %d ", position);
	}
	return 0;
}