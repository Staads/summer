#include <stdlib.h>
#include <stdio.h>

int SumRange(int a, int b)
{
    int sum = 0;

    if (a>=b)
        return 0;

    while (a<=b)
    {
        sum += a;
        a++;
    }   
    return sum; 
}

int main()
{
    int a,b;

    printf ("Vvedity a:");
    scanf  ("%d",&a);

    printf ("Vvedity b:");
    scanf  ("%d",&b);

    printf ("Function SumRange = %d",SumRange(a,b));

    printf ("\n");
    system ("pause");
    return 0;
}