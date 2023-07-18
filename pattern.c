#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
//pattern-1
/*
2
2 4
2 4 6
2 4 6 8 10
*/

/*
for(int i=1; i<=n; i++){
	for(int j=2; j<=(2*i); j = j+2){
	printf("%d",j);

	}
	printf("\n");


}

*/
//pattern-2
/*
1 3 5 7 9
1 3 5 7
1 3 5
1 3
1
*/

/*
for(int i=1;i<=n; i++){
	int count=1;
	for(int j=n+1-i; j>=1; j--){
		if(count %2 !=0){
			printf("%d",count);
			count++;
		}
		count++;
	}
	printf("\n");

}
*/
//patter-3
/*
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1
1           1
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1

*/
/*

//upper side
for(int i=1;i<=n; i++){
	//printing numbers
	for(int j=1; j<=n+1-i; j++){
	printf("%d",j);

	}
	//printing left spaces
	for(int k=1;k<i;k++){
	printf(" ");
	}
	//printing right spaces
	for(int l=1;l<i;l++){
	printf(" ");
	}
	//printing right side numbers
	for(int x=n+1-i;x>=1; x--){
		printf("%d",x);

	}
	printf("\n");
}
//down side
for(int i=1; i<=n; i++){
	//right side numbers
	for(int j=1; j<=i; j++){
		printf("%d",j);
	}
	//right side spaces
	for(int k=1; k<=n-i;k++){
		printf(" ");

	}
	//left side spaces
	for(int l=1;l<n+1-i;l++){
		printf(" ");

	}
	//left side numbers
	for(int x=i; x>=1; x--){
		printf("%d",x);

	}
	printf("\n");
}
*/

//pattern-4
/*
A A A A A
A B B B A
A B C B A
A B B B A
A A A A A

*/

for(int i=65; i<=65+n; i++){
	for(int j=i;j<=(65+n);j++){
		if(i==65 || j == (65+n)){
		printf("%c",i);
		}
	}
printf("\n");

}





}
