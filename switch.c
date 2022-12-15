#include<stdio.h>
#include<conio.h>
void main ()
{
    char c;
    int a,b,result;
    printf("Enter the sign of the operator which you want to use \n");
    scanf("%c",&c);
    printf("enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    switch (c)
    {
    case '+': 
    result=a+b;
    printf("the sum is = %d\n",result);
        break;

        case '-': 
    result=a-b;
    printf("the difference is = %d\n",result);
        break;
    
    case '*': 
    result=a*b;
    printf("the product is = %d\n",result);
        break;

        case '/': 
    result=a/b;
    printf("the quotient is = %d\n",result);
        break;

        case '%': 
    result=a%b;
    printf("the remender is = %d\n",result);
        break;
    default:
    printf("invalid entery \n");
        break;
    }
getch();
}
