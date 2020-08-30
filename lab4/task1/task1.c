#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i,j,n,sum = 0,max = 0,id = 0;
	srand(time(NULL));
	
    printf ("Input N ");
    scanf ("%d",&n);

    int z[n][n];
    printf ("Massiv:\n");
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			    {
				    z[i][j]=rand()%30-10;
				    printf ("%4.2d ",z[i][j]);
			    }
			printf ("\n\n");
		}

    printf ("\n");
    for (i=0;i<n;i++)
		{   
            sum = 0;
			for (j=0;j<n;j++)
			    {
                    if (j>=i)
                        {
				            printf ("%4.2d ",z[i][j]);
                            sum += abs(z[i][j]);
                            if (sum > max)
                                {
                                max = sum;
                                id = i;
                                }
                        }
                    else
                    printf ("     ");  
			    }
            printf ("\n\n");
		}

    printf ("\nRyadok %d  - max suma %d",id+1,max);

	printf ("\n");
	system ("pause");
	return 0;
}
