#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argc[]){

if (argc == 2)
{
    string d;

    int s=atoi(argc[1]);

    d=get_string("plaintext: ");

    printf("cyphertext: ");
    for(int i=0; i<strlen(d); i++)

    if(isalpha(d[i]))
    {
        if(islower(d[i]))
        {
            printf("%c", (((d[i]- 97)+ s)%26)+ 97);
        }
        if(isupper(d[i]))
        {
            printf("%c", (((d[i]- 65)+ s)%26)+ 65);
        }
    }
else
       {
           printf("%c",d[i]);
       }
       printf("\n");
    {
}