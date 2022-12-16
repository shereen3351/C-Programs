#include<stdio.h>
#include<conio.h>  
void main()
{    
int k,i,b=0;    
printf("Enter the number to check prime:");    
scanf("%d",&k);    
for(i=2;i<=k;i++)    
{    
if(k%i==0 )    
{    
printf("Number is not prime");    
b++;    
}    
}    
if(b==0 && b!=0 && b!=1 )    
printf("Number is prime");
else
printf("Not prime");     
getch();
}  
