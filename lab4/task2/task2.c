#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{
	int i,j,n,m;
    double res = 0,geom = 1,count = 0;
	srand(time(NULL));
	
    printf ("Input N ");
    scanf ("%d",&n);

    printf ("Input M ");
    scanf ("%d",&m);

    int a[n][m];

    printf ("Massiv:\n");
	for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			    {
				    a[i][j]=rand()%30;
				    printf ("%4.2d ",a[i][j]);
                    if (a[i][j] > 0)
                    {
                        geom = geom * a[i][j];
                        count++;
                    }
			    }
			printf ("\n\n");
		}

    double reverse = 0;
    reverse = 1.0 / count;

    res = pow(geom,reverse);

    printf ("\n%f",res);

	printf ("\n");
	system ("pause");
	return 0;
}
