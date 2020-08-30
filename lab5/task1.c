#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int i,min = 30;
    
    int a[5] = { 13, 7, 12, 13, 7};

    for ( i = 0; i < 5; i++)
    {
        if ((*(a+i) < min) && (i%2==0))
        {
            min = *(a+i);
        }
        
        printf ("%d ",*(a+i));  
    }
    
    printf ("\nMin = %d",min);

    printf ("\n");
    system ("pause");
    return 0;
}