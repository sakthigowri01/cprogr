#include <stdio.h>
int main()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            break;
        }
    }

        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
