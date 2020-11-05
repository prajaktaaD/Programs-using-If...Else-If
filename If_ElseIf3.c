//3.Find Whether given charactre is alphabate or number,if it is alphabate find whether it is vowel or consonent and if it is number then find it is even or odd::

#include<stdio.h>

int main()
{
  char ch;
  printf("Enter the character:");
  scanf("%d",&ch)
  
  if(ch>='A'&&ch<='Z')
   { 
     printf("It is alphabate:");
     
     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("The character is vowel");
  
     else
      printf("The character is conconent");
   }
   
   else if(ch>='0'||ch<='0')
     {
      printf("It is number:");
      
      if(ch%2==0)
       printf("The num is even:");
       
      else
       printf("The num is odd:");
       
     }
     
    return 0;
  }  
  
