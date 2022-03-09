#include <stdio.h>
#include <stdlib.h>

 long factorielle(int n)
{
    if (n==0)
        return 1;
    else
        return(n*factorielle(n-1));
}
int main(int argc, char *argv[])
{
    int p;
    long fact;

    printf("SVP entrer un nombre pour calculer sa factorielle \n ");
    scanf(" %d", &p);

    if(p<0)
        printf("La factorielle des nombres negatif n'est pas definit \n");

        else
        {
            fact = factorielle(p);
            printf("la factorielle de %d! est = %ld\n", p,fact);
        }

    return 0;
}
