#include<stdio.h> 

int getsize(int size){
    printf("How many numbers? ");
    scanf("%d", &size);
    return size;
}

void getvalues(int arr[],int size){

    printf("Enter totally %d numbers:\n", size);
    for(int i = 0; i < size; i++) {
        printf("arr[ %d ]: ", i + 1);
        scanf("%d", &arr[i]); 
    }
    
    printf("\nYour Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionsort(int arr[],int size){       
    
    int temp;

    for(int i=0;i<size-1;i++){
        int min = i;

        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }          
}

void printsort(int arr[],int size){

    printf("\nYour Array After SELECTION SORT : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main(){

    int arr[100];
    int size=0;

    size = getsize(size);
    getvalues(arr,size);
    selectionsort(arr,size);
    printsort(arr,size);

    return 0;

}