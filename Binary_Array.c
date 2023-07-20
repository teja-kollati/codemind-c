#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int binary;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0 || arr[i] == 1){
            binary = 1;
        }
        else{
            binary = 0;
            break;
        }
    }
    if(binary == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}