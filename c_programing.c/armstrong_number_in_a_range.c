#include<stdio.h>
#include<math.h>
int main ()
{
    int k ,m,n2,r;
    printf("enter the range : ");
    scanf("%d %d",&k,&m);
    int n=k;
    while( n<=m){
        int sum=0;
        int count=0,
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
        printf("%d ",n2);
    }
    n++;
}
    return 0;
}