#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,j;
    printf("Enter the number upto which you want to print \n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
 getch();
}
