#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int j=1; j<=n;j++){
    //spaces
    for(int k=1; k<=n-j; k++){
        printf(" ");
    }
    int b=1; // Initializing the first and last element of a row 
    for(int i=1; i<=j; i++){
        printf("%d ",b);// The first value in a row is always 1
        b = b*(j-i)/i; //calculating middle elements of a row
    }
    printf("\n");

  }
  return 0;
}