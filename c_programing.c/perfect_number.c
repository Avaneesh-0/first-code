#include<stdio.h>
int main() {
    int n,sum=0;
        printf("enter the number : ");
    scanf("%d",&n);
    if(n>=0){
        for(int i=1;i<=(n/2);i++){
            if(n%i==0){
        sum=sum+i;}
    }
    if (sum==n){
        printf("%d is a perfect number",n);
    } else {
        printf(" %d  is not a perfect number",n);
    }
} else{
    printf("enter positive number");
}
return 0;
}