#include<stdio.h>
int isugly(int n){
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        } 
        else if(n % 3 == 0){
            n /= 3;
        }
        else if(n % 5 == 0){
            n /= 5;
        }
        else {
            return -1;
            break;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(isugly(n) == 1){
        printf("Ugly Number");
    }
    else{
        printf("Not Ugly Number");
    }
}