#include<stdio.h>
#include<math.h>
void main(){
//first sereis
/*
1+2+4+7+11+16...
*/
int n;
scanf("%d",&n);
/*
int x=1;
for(int i=1; i<=n; i++){

	printf("%d+",x); 
	x = x+i;
	if(i==n){
		printf("....");
	}
}
*/

//1+11+111+1111+.....
/*
int x =0;
for(int i=0; i<n; i++){
	x = pow(10 ,i)+x;
	printf("%d+",x);
	if(i==n-1){
		printf("....");
	}
}
*/
//x+x^2+x^3+x^4+x^5+x^6+.....
/*
for(int i=1; i<=n; i++){
	if(i==1){
	printf("x+");
	}else{
	printf("x^%d+",i);
	}

	if(i==n){
	printf("....");
	}

}
*/

//x+x^2-x^3+x^4-x^5+.....
/*
for(int i=1;i<=n; i++){
	if(i%2!=0){
		if(i==1){
		printf("x");
		}else{
		printf("-x^%d",i);
		}
	}else{
	printf("+x^%d",i);

	}
	if(i==n){
	printf("...");
	}


}
*/

// 1/x -x/x^2 +1/x^3 -1/x^4......
for(int i=1; i<=n; i++){
	if(i==1){
	printf("1/x");
	}else{
		if(i%2==0){
		printf(" -1/x^%d",i);
		}else{
		printf(" +1/x^%d",i);
		}
	}

	if(i==n){
	printf("....");
	}


}





}
