#include<stdio.h>
int main (){
    int a=1,b=1,c,n,i;
    printf("enter the nth term : ");
    scanf("%d", &n);
    for(i=1; i<=n-2; i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d ", c);
    return 0;
}