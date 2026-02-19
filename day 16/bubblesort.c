#include<stdio.h>

int getsize(int size){
    printf("How many numbers? ");
    scanf("%d", &size);
    return size;
}
void getvalues(int arr[],int size){

    arr[size]; 
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
void bubblesort(int arr[],int size){        // chaeck the number with next number        arr[1] with arr[1+1]
    int temp=0;
    for(int i=0;i<size;i++){
        for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                }
      
            }            
    }
    printf("\nYour Array After BUBBLESORT   :    ");
    for(int i =0;i<size;i++){
        
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int main(){
    int arr[50];
    int size=0;
    size=getsize(size);
    getvalues(arr,size);
    bubblesort(arr,size);
    return 0;

}