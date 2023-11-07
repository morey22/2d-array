#include <stdio.h>
#include <math.h>
int main() {
    int a,b,S;
    printf("enter the first number a :");
    scanf("%d", &a);
    printf("enter the second number b :");
    scanf("%d",&b);
    int s=pow(a,b);
    int t=pow(b,a);
     S=s+t;
    printf("%d", S);
} 
