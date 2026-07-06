#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int i=1;i<=x;i++){
    fact=fact*i ;
    }
    return fact ;
}
int main() {
    int n,sum=0,r,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+factorial(r);
        n=n/10;
    }
    if(sum==temp){
        printf("%d is a strong number",temp);
    } else {
        printf("%d is not a strong number",temp);
    }
    return 0;
}