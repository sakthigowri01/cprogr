#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 
