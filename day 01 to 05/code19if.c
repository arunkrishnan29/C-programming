#include <stdio.h>

int main()
{
    int stdmark;
    scanf("%d",&stdmark);

    if (stdmark > 100 || stdmark < 0)
    {
        printf(" please enter the marks from 0 to 100 to check the Grade \n");
    }

    else if (stdmark == 100)
    {
        printf(" Got a Distinction \n");
    }

    else if (stdmark >=90 && stdmark <100)
    {
            printf(" Got A grade \n");
    }

    else if (stdmark >=80 && stdmark<=89)
    {
            printf(" Got B grade \n");

    }
    else if (stdmark >=70 && stdmark<=79)
    {
        printf("Got C grade \n ");
    }

    else if (stdmark >=60 && stdmark<=69)
    {
        printf("Got D grade \n ");

    }
    else
    {
        printf(" Just Passed \n ");
    }

    return 0;
}