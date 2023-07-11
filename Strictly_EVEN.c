#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    int even;
    for(int i = 0; i < n; i++){
        if(ar[i] % 2 == 0){
            if(i % 2 == 0){
                even = 1;
            }
            else{
                even = 0;
                break;
            }
        }
    }
    if(even == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}