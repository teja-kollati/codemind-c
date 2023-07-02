#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1 || arr[i] == 0){
            count++;
        }
    }
    if(count == n){
        printf("True");
    }
    else{
        printf("False");
    }
}