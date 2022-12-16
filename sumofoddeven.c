#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,osum=0,esum=0;
    printf("Enter the number upto which you want to check the sum \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum=osum+i;
        }
    }
    printf("Sum of All Even Numbers =%d\n",esum);
    printf("Sum of All Odd Numbers =%d\n",osum);
getch();
}
