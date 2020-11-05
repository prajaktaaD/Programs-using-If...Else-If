//1. Find the greateat of three numbers:

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three distinct integers:");
  scanf("%d%d%d",&a,&b,&c);
  
  if(a>b)
    {
       if(a>c)
         printf("The greatest is a(%d)",a);
        
       else
         printf("The greatest is c(%d)",c);
     }
  else
  if(a<b)
   {
       if(b>c)
         printf("The greatest is b(%d)",b);
         
       else
        printf("The greatest is c(%d)",c);
  }
  
  return 0;
  
}  
  
