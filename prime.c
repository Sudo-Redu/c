
#include<stdio.h>

int main(){
//prime no. 1to100

for(int i=1; i<=100; i++){
int a=1;
int count=0;
	while(a<=i){
		if(i%a==0){
		count++;
		}
	a++;
	}
	if(count ==2){
	printf("%d\n",i);
	}
//printf("hello");

}


//sum of prime no. 1 to 100
/*
int sum=0;
for(int i=1; i<=100; i++){
	int a =1;
	int count=0;
	while(a<=i){
		if(i%a==0){
		count++;
		}
	a++;
	}
	if(count==2){
	sum = sum+i;
	}

}
printf("%d",sum);
*/

//check if it is prime or not
/*
int n;
scanf("%d",&n);
int count=0;
for(int i=1; i<=n; i++){
	if(n%i==0){
	count++;
	}
}
if(count ==2){
printf("%d is a prime no.",n);
}else{
printf("%d is not a prime no.",n);
}
return 0;
*/
}
