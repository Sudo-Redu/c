#include<stdio.h>
void main(){
int a,b;
printf("Enter To Number A: ");
scanf("%d", &a);
printf("Enter Number B: ");
scanf("%d",&b);
(a, b) = (b, a);
printf("After Swap a=%d and b=%d",a ,b);

  
}
