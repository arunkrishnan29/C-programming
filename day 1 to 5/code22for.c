 #include<stdio.h>
int main()
{
    int array[]={10,20,30,40,50};
    int target = 30;
    int size =5;

    for (int i = 0 ; i< size ;i++)

    {

    
        if (array[i] == target){

        printf("Element found at index %d\n", i);
        break;
    
    else
    
        printf("element not found in the array \n");

    }
    return 0;
}

#include<stdio.h>

int main()
{
    int array[] = {10,20,30,40,50};
    int target = 30;
    int size = 5;
    int found = 0;   // flag

    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found in the array\n");
    }

    return 0;
}