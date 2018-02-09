# include <stdio.h> 
# include <conio.h>
void main() 
{ 
 int i, n, d ;  
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= n ; i++)  
   printf("%d\t", i) ; 
 getch() ; 
}
