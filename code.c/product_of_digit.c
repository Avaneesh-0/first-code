#include<stdio.h>
int main () {
    int num ,product=1 ,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0) {
        r = num % 10;
        product *= r;
        num /= 10;
    }
    printf("Product of digits: %d\n", product);
    return 0;
}
    

