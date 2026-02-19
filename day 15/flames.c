#include <stdio.h>
#include <string.h>

void getnames(char name1[],char name2[]){
    

    printf("Enter the name1     :   ");
    scanf("%s",name1);
    printf("\n");
    printf("Enter the name2     :   ");
    scanf("%s",name2);
    printf("\n");
   // printf("Welcome to the game FLAMES %c  AND  %C ",name1,name2);

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

    for(i = 0; i < len2; i++)
    {
        found = 0;

        for(j = 0; j < len1; j++)
        {
            if(name2[i] == name1[j])   // ✔ FIXED
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            result[k] = name2[i];
            k++;
        }
    }

    for(i = 0; i < len1; i++)
    {
        found = 0;

        for(j = 0; j < len2; j++)
        {
            if(name1[i] == name2[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            result[k] = name1[i];
            k++;
        }
    }

    result[k] = '\0';
    
    tlength = strlen(result);

    printf("Remaining count = %d\n", tlength);

    return tlength; 
}

void flames(int tlength)

int main(){
    char name1[50];
    char name2[50];
    getnames(name1,name2);
    int tlength=0;
    tlength=namelen(name1,name2,tlength);
    flames(tlength);

return 0;
}
