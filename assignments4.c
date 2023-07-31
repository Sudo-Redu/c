#include <stdio.h>
#include <stdbool.h>
int main(){

    int n;
    scanf("%d",&n);

    //question 2 not complete
    /*
         *
        __
       ***
      ____
     *****
    ______
    
    */
//    for(int i=1; i<=n; i++){
//     //spaces
//         for(int k =n-i; k>=1; k--){
//             printf(" ");
//         }
//     //for printing
//     for(int j=1; j<=i; j++){
        
//         if(i%2!=0){
//             printf("*");
//         }else{
//             printf("-");
//         }
//     }
//     printf("\n");
//    }

    //question 3
    /*
    *-------*
     *-----*
      *---*
       *-*
        *
    */
//    int i=n;//5
//    while(i>=1){
//     //for spases
//     for(int k=1; k<=n-i; k++){
//         printf(" ");
//     }
//     //printing
//     for(int j=1; j<=(i*2-1); j++){
//         if(j==1 || j==(i*2-1)){
//             printf("*");
//         }else{
//             printf("-");
//         }
//     }
//     printf("\n");
//     i=i-1;
//    }

    //question 3
    /*
        *
       ---
      *****
     -------
    *********
     -------
      *****
       ---
        *
    
    */
//    bool flag = true;
   //upper half
//    for(int i=1; i<=n;i++){
//         //spaces
//         for(int k=1; k<=n-i; k++){
//             printf(" ");
//         }
//         //printing
//         for(int j=1; j<=i*2-1; j++){
//             if(flag == true){
//                 printf("*");
                
//             }else{
//                 printf("-");
                
//             }
//         }
//         if(flag == true){
//             flag = false;
//         }else{
//             flag = true;
//         }
        
    
//     printf("\n");
//    }
   //lower half
//    for(int i=1; i<=(n-1);i++){
//         //spaces
//         for(int k=n-i; k<n; k++){
//             printf(" ");
//         }
//         for(int j=1; j<=((n-i)*2-1); j++){
//             if(flag == true){
//                 printf("*");
                
//             }else{
//                 printf("-");
                
//             }
//         }
//         if(flag == true){
//             flag = false;
//         }else{
//             flag = true;
//         }
        
//     printf("\n");
//    }

    //question 5
    //23432->14->5

    // long int n;
    // scanf("%ld",&n);

    // bool flag = false;
    // int sum=0;
    // printf("%ld -> ",n);
    // while(flag == false ){
    //     //sum
    //     while(n>0){
    //         sum = sum + (n%10);
    //         n = n/10;
    //     }
    //     if(sum>=10){
    //         printf("%d -> ",sum);
    //         n= sum;
    //         sum =0;
    //     }else{
    //         printf("%d",sum);
    //         flag = true;
    //     }
    // }

    //question 6 part 1
    //date validation
    // int dd,mm,yyyy;
    // printf("Enter Date in This Form DDMMYYYY\n");
    // printf("DD-> ");
    // scanf("%d",&dd);
    // printf("MM-> ");
    // scanf("%d",&mm);
    // printf("YYYY-> ");
    // scanf("%d",&yyyy);
    // bool T0 = false;
    // bool T1 = false;
    // bool isValid=true;
    // bool leapYear = false;
    // if(yyyy<0){
    //     printf("It's Not a Valid Date");
    //     isValid = false;

    // }else{
    //     if(yyyy%4==0){
    //         leapYear = true;
    //     }
    //     //month valid or not
    //     if(mm<1 || mm>12){
    //     printf("It's Not a Valid Date");
    //     isValid = false;

    //     }else{
    //         //  printf("hello m");
    //         //for 31 days months
    //         if(mm == 1 ||mm == 3 ||mm == 5 ||mm == 7 ||mm == 8 ||mm == 10 ||mm == 12){
    //             T1 = true;
    //         }else if(mm == 4 || mm == 6 ||mm == 9 ||mm == 11 ){
    //             T0 = true;
    //         }

    //         //day validation
    //         if(dd<1 || dd>31){
    //         printf("It's Not a Valid Date");
    //             isValid = false;

    //         }else if(T0==true && dd>30){
    //             printf("It's Not a Valid Date");
    //             isValid = false;

    //         }else if(T1 == true && dd>31){
    //             printf("It's Not a Valid Date");
    //             isValid = false;

    //         }else if(mm==2){
                
    //             if(leapYear==true){
                    
    //                 if(dd>29){
    //                     printf("It's Not a Valid Date");
    //                     // printf("%d",leapYear);
    //                     isValid = false;
    //                 }
    //             }else if(dd>28){
    //                 printf("It's Not a Valid Date");
    //                     isValid= false;
    //             }
    //         }
    //     }
    // }
    // if(isValid== true){
        
    // printf("Date is Valid");
            
    // }

    //question 6 part 2 not complete
    //difference to 2 given dates in days,months,years;

    //first date
//     int dd , mm,yyyy;
//     printf("Enter a Valid Date in DDMMYYYY\n");
//     printf("First Date in This Form \n");
//     printf("DD-> ");
//     scanf("%d",&dd);
//     printf("MM-> ");
//     scanf("%d",&mm);
//     printf("YYYY-> ");
//     scanf("%d",&yyyy);

//     //second date
//     int dd1 , mm1,yyyy1;
//     printf("Second Date in This Form \n");
//     printf("DD-> ");
//     scanf("%d",&dd1);
//     printf("MM-> ");
//     scanf("%d",&mm1);
//     printf("YYYY-> ");
//     scanf("%d",&yyyy1);

//     if(yyyy>yyyy1){
//         yyyy = yyyy-yyyy1;
//     }else{
//         yyyy = yyyy1-yyyy;
//     }

//     if(mm>mm1){
//         mm = mm-mm1;
//     }else{
//         mm = mm1-mm;
//     }

//     if(dd>dd1){
//         dd = dd-dd1;
//     }else{
//         dd = dd1-dd;
//     }

// printf("Differnce is %d years %d months %d days",yyyy,mm,dd);
    

    //question 7 -not
    //1,2,5,10,20,50,100,500
    // int n; 
    // scanf("%d",&n);
    // int temp =1;
    
    //     //500
    //     if(n>=500){
    //         temp = n/500;
    //         printf("%d notes of 500rs\n",temp);
    //         n = n%500;

    //     }
    //     if(n<=499 && n>=100){
    //         temp= n/100;
    //         printf("%d notes of 100rs\n",temp);
    //         n = n%100;
    //         // printf("%d\n",n);
    //     }
    //     if(n<=99 && n>=50){
    //         temp = n/50;
    //         printf("%d notes of 50rs\n",temp);
    //         n = n%50;
    //     }
    //     if(n<=49 &&n>=20){
    //         temp= n/20;
    //         printf("%d notes of 20rs\n",temp);
    //         n = n %20;
    //     }
    //     if(n<=19 &&n>=10){
    //         temp= n/10;
    //         printf("%d notes of 10rs\n",temp);
    //         n =n%10;
    //     }
    //     if(n<=9 &&n>=5){
    //         temp= n/5;
    //         printf("%d notes of 5rs\n",temp);
    //         n =n%5;
    //     }
    //     if(n<=4 &&n>=2){
    //         temp= n/2;
    //         printf("%d notes of 2rs\n",temp);
    //         n =n%2;
    //     }if(n<=1 &&n>=1){
    //         temp= n/1;
    //         printf("%d notes of 1rs\n",temp);
    //         n =n%1;
    //     }
        
  //question 8
  
    

    



}
