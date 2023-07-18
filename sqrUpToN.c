#include <stdio.h>

int main(){
int x;
int sum;
scanf("%d",&x);
for(int i=1; i<=x; i++){
	sum = sum+(i*i);
	printf("%d\n",sum);
}
printf("%d",sum);
return 0;


}
