#include <stdio.h>


int positionElement(int arr[], int n, int key){
	for(int i = 0;  i < n; i++){
		if(arr[i] == key){
			return i;
		}else{
			return -1;
		}

	}
	return n-1;
}


int deleteElement(int arr[], int n, int key){
	int position = positionElement(arr, n, key);
	if(position == -1){
		printf("\nElement Not Found !");
		return -1;
	}else{
		for(int i = position; i < n; i++){
			arr[i] = arr[i+1];
		}
	}

}



int main(){
	int arr[] = {12, 34, 23 , 565, 3232, 767, 43 ,5656 ,334};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 34;

	printf("\nBefore Deletion :");
	for(int i = 0; i < n; i++){
		printf(" %d ", arr[i]);
	}

	printf("\n");

	int b = deleteElement(arr, n, key);

	printf("\nAfter Deletion :");
	for(int i = 0; i < b; i++){
		printf(" %d ", arr[i]);
	}

	return 0;
}