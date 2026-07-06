#include<stdio.h>
#include<math.h>
int main ()
{
    int n,n2,r,sum=0,count=0;
    printf("enter the num : ");
    scanf("%d",&n);
    n2=n;
    int n1=n;
    while(n1>0)
    {
        n1=n1/10;
        count=count+1;
    }
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        sum=sum+round(pow(r,count));
        n1=n1/10;}
    if(sum==n2)
    {
        printf("%d is a armstrong number",n2);
    }
    else
    {
        printf("%d is not a armtsrong number",n2);
    }
    return 0;
}