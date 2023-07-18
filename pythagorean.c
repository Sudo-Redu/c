#include<stdio.h>
void main(){
for(int x=1; x<=50; x++){
	for(int y =1; y<=50; y++){
		for(int z=1; z<=50; z++){
			if(x<y && y<z && (((x*x)+(y*y))==(z*z))){
				printf("x -> %d y-> %d z-> %d\n",x ,y,z);

			}

		}
	}
}



}
