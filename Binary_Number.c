#include<stdio.h>
void printBinary(int n){
    for(int i = 0; i < (1 << n); i++){
        for(int j = n - 1; j >= 0; j--){
            if((1 << j) & i){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("
");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printBinary(n);
}