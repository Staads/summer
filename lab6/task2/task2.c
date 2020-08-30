#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char txt[60];
    int x,count = 0;
    printf ("Vvedity imya prizvishe i po batykovi  \n");
    gets(txt);
    
    x = strlen(txt);
    printf ("Dovjina ryadka - %d",x);

    int count_name = 0,count_prizvishe = 0;
    for (int i = 0; i < x; i++)
    {
        if (txt[i] == 'a')
            {
                count++;
            }
    }
    printf ("\nKilkisty bukv a - %d\n\n",count);
    


    int k=0;
    for ( int i = 0; i < x; i++)
    {
        if (txt[i] == ' ')
            {
                k++;
                i++;
            }

        if (k==0)
            count_name++;

        if (k==1)
            {    
                count_prizvishe++;
            }
    }
   
    printf ("\nImya - %d bukv , prizvishe - %d bukv\n",count_name,count_prizvishe);

    char *token;
    token = strtok(txt," ");
    printf ("\nKilkisty bukv v imeny - %d",strlen(token)); 
    token = strtok(NULL," ");
    printf ("\nKilkisty bukv v prizveshi - %d",strlen(token)); 


	printf ("\n\n\n\n");
	system ("pause");
	return 0;
}
