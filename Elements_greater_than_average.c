#include<stdio.h>
int average(int * ar, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    return sum / n;
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    int avrg = average(ar,n);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ar[i] >= avrg){
            count++;
        }
    }
    printf("%d",count);
}