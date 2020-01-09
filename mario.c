#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    int m;
    int o;
    int p;
    do
    {
    n = get_int("Size: ");    
    }
    while (n<1||n>8);
    o = n;
    m = n;
    p = n;
    do
    {
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        do 
        {
            printf("#");
            m++;
        }
        while(m<=o);
        printf("  ");
        do 
        {
            printf("#");
            p++;
        }
        while(p<=o);
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        printf("\n");       
    n=n-1;
    m=n;
    p=n;
    }
    while (n > 0);
}
