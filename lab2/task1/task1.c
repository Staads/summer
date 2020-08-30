#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,sum = 0,count = 0;
    float ser = 0;
    int p[8];

    for ( i = 0; i < 9; i++)
    {
        p[i] = rand()% 15-4;
        printf ("[%d] - %d \n",i,p[i]);
        if (p[i]>0)
        {
            sum += i;
            count++;
        }    
    }
    
    ser = (float)sum / count;

    printf ("%.2f ",ser);

    printf ("\n");
    system ("pause");
    return 0;
}