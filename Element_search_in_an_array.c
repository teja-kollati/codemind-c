#include<stdio.h>
int Binary_search(int *arr, int n, int se , int low , int high){
	int mid;
	if (low > high){
		return -1;
	}
	else{
		mid = (low + high)/2;
		if(arr[mid] == se)
		return mid;
		else if (arr[mid] < se)
		return Binary_search(arr, n, se, mid + 1, high);
		else if (arr[mid] > se)
		return Binary_search(arr, n, se, low, mid - 1);
	}
}
int main(){
	int n, i;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int low = 0, high = n-1;
	int res = Binary_search(arr,n,se,low,high);
	if (res == -1)
	printf("False");
	else
	printf("True");
}