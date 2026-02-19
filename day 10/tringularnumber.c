#include<stdio.h>
int main(){
    int i;
    int trianglenum;
    int num;

    trianglenum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    
    
    for(i=1;i<=num;++i){
        
       trianglenum =trianglenum+i;
        
        printf("%d      %d\n",i,trianglenum);
    }
    return 0;
    
}