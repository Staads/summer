#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
	int k=6,n=5,i,j,max = -20, min = 1000,x,y;
	int a[k][n];
printf ("Candidaty: \n");
printf ("     (1)   (2)   (3)   (4)   (5)  \n");
    for (int i = 0; i < k; i++)
    {
        printf ("(%d)",i+1);
        for (int j = 0; j < n; j++)
        {
            a[i][j]=rand()%100+1;
            printf ("%5.2d ",a[i][j]);
        }
        printf ("\n     \n");
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 3)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                    x = j;
                }
                
                if (a[i][j] < min)
                {
                    min = a[i][j];
                    y = j;
                }
            } 
        }
    }
    
    printf ("\n4 Naseleniy punkt  %d candidat  -  max = %d   ",x+1,max);
    printf ("\n4 Naseleniy punkt  %d candidat  -  min = %d   ",y+1,min);

	printf ("\n");
	system ("pause");
	return 0;
}
