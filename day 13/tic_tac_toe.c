#include<stdio.h>
// --- tic tac toe ---
int getsize(){
    int s;
    printf("Enter the size for the tic tac toe play ground      :       \n");
    scanf("%d",&s);
    return s;
}
void printoutput(int size){
    printf("\n\nThe %d X %d play ground is Ready\n\n",size,size);
}
void initboard(int size,int arr[size][size]){
    int value = 1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        arr[i][j]=value++;
        }
    }
}
void printboard(int size,int arr[size][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i][j]==-1){
                printf(" X ");
            }
                else if(arr[i][j]==-2){
                printf(" O ");
                }
                    else{
                        printf(" %02d ",arr[i][j]);
                
                }
        }
        printf("\n");
    }
}

void startmove(int size, int arr[size][size], int symbol) {
    int position, index, row, col;
    while(1) {
        printf("\nEnter position for %s: ", (symbol == -1) ? "X" : "O");
        scanf("%d", &position);

        index = position - 1;
        row = index / size;
        col = index % size;

        if(arr[row][col] == -1  ||   arr[row][col] == -2) {
            printf("Spot already taken! Try again.\n");
        } else {
            arr[row][col] = symbol; 
            break;
        }
    }
}

int wincheck(int size, int arr[size][size], int symbol)
{
    int i, j;
    int win;

                                          // rows
    for(i = 0; i < size; i++)
    {
        win = 1;
        for(j = 0; j < size; j++)
        {
            if(arr[i][j] != symbol)
            {
                win = 0;
                break;
            }
        }
        if(win == 1)
            return 1;
    }

                                       // columns
    for(j = 0; j < size; j++)
    {
        win = 1;
        for(i = 0; i < size; i++)
        {
            if(arr[i][j] != symbol)
            {
                win = 0;
                break;
            }
        }
        if(win == 1)
            return 1;
    }

                                          //diagonal
    win = 1;
    for(i = 0; i < size; i++)
    {
        if(arr[i][i] != symbol)
        {
            win = 0;
            break;
        }
    }
    if(win == 1)
        return 1;

                                                                 // anti-diagonal
    win = 1;
    for(i = 0; i < size; i++)
    {
        if(arr[i][size-1-i] != symbol)
        {
            win = 0;
            break;
        }
    }
    if(win == 1)
        return 1;

    return 0;
}


int main(){
    printf("---- WELCOME TO TIC TAC TOE ----\n\n");

    int size;
    
    size=getsize();
    printoutput(size);
    int arr[size][size];
    initboard(size,arr);
    printboard(size,arr);
    int symbol;
    int totalsize=size*size;    // total size == total turn
    for(int i=0;i<totalsize;i++){
        if(i%2==0){
            symbol=-1;
        }
        else{
            symbol=-2;
        }
        startmove(size,arr,symbol);
        printboard(size,arr);
    
        
    if(wincheck(size,arr,symbol))
    {
        if(symbol==-1)
            printf("\nPlayer X won\n");
        else
            printf("\nPlayer O won\n");
            
            break;
        }
        
                    if (i == totalsize-1) {
                        printf("\ndraw\n");
                }
            
    }
    return 0;
}


