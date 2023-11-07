#include<stdio.h>
int main(){
    int r;
    printf("enter the number rows : ");
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
    for(int i=0;i<r;i++){
        for(int j=1;j<c;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<r;i++){
        int j=0;;
        int k = r-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}