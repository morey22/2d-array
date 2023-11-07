#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of coloums : ");
    scanf("%d", &c);
    int arr[r][c];
    int sum = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("Total matrix sum of %d", sum);
    return 0;
}