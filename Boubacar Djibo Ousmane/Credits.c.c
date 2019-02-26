#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long long n;
    n=get_long("card number:");
    int i=0;
    while(n!= '\0')
    {
        i++;
    }
    printf("%lld\n",n);
}