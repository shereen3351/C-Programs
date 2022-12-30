#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,r,sum=0,c,digits=0;
    printf("Enter the numer \n");
    scanf("%d",&n);
    c=n;
    while (c!=0)
    {
        digits++;
        c=c/10;
    }
    c=n;
    while (c!=0)
    {
        r=c%10;
        sum=sum+pow(r,digits);
        c=c/10;
    }
    if(n==sum)
    {
        printf("%d is a armstrong number ",n);
    }
    
    getch();
}
