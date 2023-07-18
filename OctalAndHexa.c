#include<stdio.h>
#include<string.h>
int main(){
/*
int num;
char str1[]="";
int count=0;
scanf("%d",&num);
while(num/8!=0){
str1 = *strcat(str1 ,num%8);
num = num/8;
if(num<8){
printf("%d",num);
}
}
printf("%s",str1);
*/

int num;
scanf("%d",&num);
printf("Octal: %o\n",num);
printf("HexaDecimal: %x",num);
return 0;



}

