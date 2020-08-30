#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,sum = 0,count = 0;

    int a[8] = {1,2,4,5,7,8,10,11};
    int b[8] = {1,3,4,6,7,9,10,12};
    
    printf ("Massiv a:\n");
    for ( i = 0; i < 8; i++)
    {
        printf ("%d  ",a[i]);
    }

    printf ("\nMassiv b:\n");
    for ( i = 0; i < 8; i++)
    {
        printf ("%d  ",b[i]);
    }
    printf ("\n\n");
    for ( i = 0; i < 8; i++)
    {
        if (a[i] == b[i])
        {
            count++;
            printf ("Element yakiy spivpadae - %d\n",a[i]);
        }
    }

    printf ("\n%d elementiv spivpadayuty",count);

    printf ("\n");
    system ("pause");
    return 0;
}