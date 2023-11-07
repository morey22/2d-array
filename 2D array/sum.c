#include<stdio.h>
int main() {
    int r;
    printf("enter the number of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter the number of coloums : ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int R;
    printf("enter the number rows : ");
    scanf("%d", &R);
    int C;
    printf("enter the number coloums : ");
    scanf("%d", &C);
    int brr[R][C];
    int crr[r][c];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d", &brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}