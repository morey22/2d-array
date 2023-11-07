#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of columns : ");
    scanf("%d", &n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("Enter the number of rows : ");
    scanf("%d", &p);
    int q;
    printf("Enter the number of columns : ");
    scanf("%d", &q);
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d", &brr[i][j]);
        }
    }
    if(n!=p){
        printf("The matrices cannot multiplying");
    }
    else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] = arr[i][k]*brr[k][j];
                }
            }
        }
    }
    int res;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
}