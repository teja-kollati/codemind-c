#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int even_sum = 0;
    int odd_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                even_sum += mat[i][j];
            }
            else{
                odd_sum += mat[i][j];
            }
        }
    }
    printf("%d %d",even_sum,odd_sum);
}