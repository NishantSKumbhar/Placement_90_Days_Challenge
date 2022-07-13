#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

	// int arr[10];

	// for(int i = 1; i <= 10; i++){
	// 	printf("%d : Enter the N umbers to add it to array : ", i);
	// 	scanf("%d", &arr[i]);
	// }

	// printf("elements in array are : ");
	// for(int i = 1; i <= 10; i++){
	// 	printf("%d ",arr[i]);
	// }

	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	cout<<"Size of array is : "<<sizeof(arr)<<endl;
	cout<<"Size of first element : "<<sizeof(arr[0])<<endl;
	cout<<"Total Elemts of array : "<<sizeof(arr)/sizeof(arr[0])<<endl;
	return 0;
}