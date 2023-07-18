#include<stdio.h>
int main(){
long int n;
printf("enter any no: ");
scanf("%ld",&n);
while(n!=0){
printf("%ld",n%10);
n = n/10;
}


return 0;
}
