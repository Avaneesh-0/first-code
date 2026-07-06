#include<stdio.h>
int main(){
    int start, end;
    printf("enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printf("prime numbers in the range are: ");
    for(int i=start; i<=end; i++){
        int isPrime = 1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime && i>1){
            printf("%d ", i);
        }
    }
    return 0;
}