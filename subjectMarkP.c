#include<stdio.h>
int main(){
int m;
int p;
int pps;
int che;
int eng;
printf("Maths marks:");
scanf("%d",&m);
printf("Physics Marks:");
scanf("%d",&p);
printf("PPS Marks:");
scanf("%d",&pps);
printf("Chemistry Marks:");
scanf("%d",&che);
printf("English Marks:");
scanf("%d",&eng);

printf("percetage :%.2f%%",((m+p+pps+che+eng)/500.0)*100);




}
