#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
                sum += mat[i][j];
            }
        }
    }
    printf("%d",sum);
}