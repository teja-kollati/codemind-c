#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += mat[i][j];
        }
        printf("%d ",sum);
    }
}