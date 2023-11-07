#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows ; ");
    scanf("%d", &r);
    int c;
    printf("enter the number of coloums : ");
    scanf("%d", &c);
    int arr[r][c];
    int sub =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sub = arr[i] - arr[j];
            printf("%d", sub);
        }
        printf("\n");
    }
    return 0;
}