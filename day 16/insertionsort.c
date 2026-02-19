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
void insertionsort(int arr[],int size){        // check+ the number with next number        arr[1] with arr[1+1]
    
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
        }
        
    }            

void printsort(int arr[],int size){

        printf("\nYour Array After INSERTIONSORT   :    ");
        for(int i=0;i<size;i++){
            
            printf("%d ",arr[i]);
        }
        printf("\n");
    
}

int main(){
    int arr[100];
    int size=0;
    size=getsize(size);
    getvalues(arr,size);
    insertionsort(arr,size);
    printsort(arr,size);

    return 0;

}