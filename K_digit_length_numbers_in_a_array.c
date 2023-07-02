#include<stdio.h>
int findlen(int n){
    int count = 0,temp;
    if(n < 0){
        temp = -n;
    }
    else{
        temp = n;
    }
    if(temp == 0){
        return 1;
    }
    else{
        while(temp > 0){
            count++;
            temp /= 10;
        }
        return count;
    }
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(findlen(arr[i]) == k){
            count++;
        }
    }
    printf("%d",count);
}