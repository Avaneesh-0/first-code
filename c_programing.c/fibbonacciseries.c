#include<stdio.h>
int main (){
    int a=1,b=1,c,n,i;
    printf("enter the number of terms : ");
    scanf("%d", &n);
    printf("the fibonacci series is : %d %d ", a, b);
    for(i=1; i<=n-2; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
    return 0;
}