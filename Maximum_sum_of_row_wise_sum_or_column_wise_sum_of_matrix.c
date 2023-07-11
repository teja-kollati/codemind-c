#include<stdio.h>
int max(int * arr, int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int rowsum[n];
    for(int i = 0; i < n; i++){
        rowsum[i] = 0;
        for(int j = 0; j < m; j++){
            rowsum[i] += mat[i][j];
        }
    }
    int colsum[m];
    for(int i = 0; i < m; i++){
        colsum[i] = 0;
        for(int j = 0; j < n; j++){
            colsum[i] += mat[j][i];
        }
    }
    if(max(rowsum,n) > max(colsum,m)){
        printf("%d",max(rowsum,n));
    }
    else{
        printf("%d",max(colsum,m));
    }
}