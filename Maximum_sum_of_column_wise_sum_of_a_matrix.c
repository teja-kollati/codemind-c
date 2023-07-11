#include<stdio.h>
int max(int *sum, int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < sum[i]){
            max = sum[i];
        }    
    }
    return max;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int sum[m];
    for(int i = 0; i < m; i++){
        sum[i] = 0;
        for(int j = 0; j < n; j++){
            sum[i] += mat[j][i];
        }
    }
    printf("%d",max(sum,m));
}