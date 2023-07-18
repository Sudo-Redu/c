#include <stdio.h>
void main(){
int num;
int digit;
printf("Enter a Number: ");
scanf("%d",&num); 
printf("Enter a digit:");
scanf("%d",&digit);
int count =0;
while(num!=0){
	if(num%10==digit){
		count++;
	}
	num = num/10;
}
printf("%d",count);

}
