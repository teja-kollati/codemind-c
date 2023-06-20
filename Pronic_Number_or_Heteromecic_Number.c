#include<stdio.h>
int ispronic(int n){
    for(int i = 0; i < n/2 + 1; i++){
        if(i * (i + 1) == n){
            return 1;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(ispronic(n) == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}