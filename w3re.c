#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0){
        printf("%d ",i);
        sum=sum+i;
        }
    }
    printf("\n");
    printf("sum is: %d\n",sum);

    if(sum!=n)
    {
        printf("so,the number is no perfect");
    }
}
