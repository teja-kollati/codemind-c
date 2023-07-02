#include<stdio.h>
void printlen(int n){
    int count = 0,temp;
    if(n < 0){
        temp = -n;
    }
    else{
        temp = n;
    }
    if(temp == 0){
        printf("1 ");
    }
    else{
        while(temp > 0){
            count++;
            temp /= 10;
        }
        printf("%d ",count);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        printlen(arr[i]);
    }
}