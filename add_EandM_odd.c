#include<stdio.h>
void main(){
int x;
printf("Enter any six digit Number: ");
scanf("%d",&x);
int even=0;
int odd=1;
while(x>0){
	int temp = x%10;
	//even check
	if(temp%2==0){
	even = even + temp;
	}else{
	odd = odd*temp;
	}
	x=x/10;
}
printf("Sum of All Even Numbers: %d\n",even);
printf("Multiplication of All odd Numbers: %d",odd);




}
