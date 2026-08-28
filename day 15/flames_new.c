#include <stdio.h>
#include <string.h>

void getnames(char name1[],char name2[]){
    
    printf("Enter the name1     :   ");
    scanf("%s",name1);
    printf("\n");

    printf("Enter the name2     :   ");
    scanf("%s",name2);
    printf("\n");

    if(strcmp(name1,name2)==0){
        printf("same names coudn't do the process ");
    }
    else
        printf("welcome To FLAMES game !!! \n%s and %s           \n",name1,name2);
}


int namelen(char name1[],char name2[],int tlength)
{
    int len1=strlen(name1);
    int len2=strlen(name2);

    char result[100];

    int found,i,j;
    int k=0;

    // Make copies so that matched characters
    // can be marked as already used
    char temp1[50];
    char temp2[50];

    strcpy(temp1,name1);
    strcpy(temp2,name2);

    /*
       Remove matching characters one by one
    */

    for(i = 0; i < len1; i++)
    {
        found = 0;

        for(j = 0; j < len2; j++)
        {
            if(temp1[i] == temp2[j] && temp2[j] != '\0')
            {
                // Mark both characters as used
                temp1[i] = '\0';
                temp2[j] = '\0';

                found = 1;
                break;
            }
        }
    }

    // Add remaining characters from name1
    for(i = 0; i < len1; i++)
    {
        if(temp1[i] != '\0')
        {
            result[k] = temp1[i];
            k++;
        }
    }

    // Add remaining characters from name2
    for(i = 0; i < len2; i++)
    {
        if(temp2[i] != '\0')
        {
            result[k] = temp2[i];
            k++;
        }
    }

    result[k] = '\0';

    tlength = strlen(result);

    printf("Remaining count = %d\n", tlength);

    return tlength; 
}


void flames(int tlength)
{
    char f[] = "FLAMES";
    int len = 6;
    int index = 0;
    int count;
    int i;

    if(tlength == 0)
    {
        printf("Cannot determine FLAMES result.\n");
        return;
    }

    while(len > 1)
    {
        count = tlength % len;

        if(count == 0)
            count = len;

        index = (index + count - 1) % len;

        for(i = index; i < len - 1; i++)
        {
            f[i] = f[i + 1];
        }

        len--;

        if(index == len)
            index = 0;
    }

    printf("FLAMES result = ");

    switch(f[0])
    {
        case 'F':
            printf("FRIENDS\n");
            break;

        case 'L':
            printf("LOVERS\n");
            break;

        case 'A':
            printf("AFFECTION\n");
            break;

        case 'M':
            printf("MARRIAGE\n");
            break;

        case 'E':
            printf("ENEMIES\n");
            break;

        case 'S':
            printf("SIBLINGS\n");
            break;
    }
}


int main(){
    char name1[50];
    char name2[50];

    getnames(name1,name2);

    int tlength=0;

    tlength=namelen(name1,name2,tlength);

    flames(tlength);

    return 0;
}