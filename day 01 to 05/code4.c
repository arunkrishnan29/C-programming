#include <stdio.h>

int sum(int a, int b) { return a +b;}
 

int mul(int a, int b) {
  int d=a*b;
  return d;
}

int main() {

  scanf("%d", &a);
  scanf("%d", &b);

	int c = sum(a,b);
  int d = mul(a,b);
  
    // Calling the function using its name
  printf(" sum of %d and %d is: %d\n",a,b,c);

  printf("Multiplication of %d and %d is : %d\n",a,b,d);
    
  return 0;
}
