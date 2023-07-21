#include<stdio.h>
#include<stdbool.h>
int main(){
    int dd , mm,yyyy;
    printf("Enter Date in This Form DDMMYYYY\n");
    printf("DD-> ");
    scanf("%d",&dd);
    printf("MM-> ");
    scanf("%d",&mm);
    printf("YYYY-> ");
    scanf("%d",&yyyy);
    bool T0 = false;
    bool T1 = false;
    bool isValid=true;
    bool leapYear = false;
    if(yyyy<0){
        printf("It's Not a Valid Date");
        isValid = false;

    }else{
        if(yyyy%4==0){
            leapYear = true;
        }
        //month valid or not
        if(mm<1 || mm>12){
        printf("It's Not a Valid Date");
        isValid = false;

        }else{
            //  printf("hello m");
            //for 31 days months
            if(mm == 1 ||mm == 3 ||mm == 5 ||mm == 7 ||mm == 8 ||mm == 10 ||mm == 12){
                T1 = true;
            }else if(mm == 4 || mm == 6 ||mm == 9 ||mm == 11 ){
                T0 = true;
            }

            //day validation
            if(dd<1 || dd>31){
            printf("It's Not a Valid Date");
                isValid = false;

            }else if(T0==true && dd>30){
                printf("It's Not a Valid Date");
                isValid = false;

            }else if(T1 == true && dd>31){
                printf("It's Not a Valid Date");
                isValid = false;

            }else if(mm==2){
                
                if(leapYear==true){
                    
                    if(dd>29){
                        printf("It's Not a Valid Date");
                        // printf("%d",leapYear);
                        isValid = false;
                    }
                }else if(dd>28){
                    printf("It's Not a Valid Date");
                        isValid= false;
                }
            }
        }
    }
    if(isValid== true){
        
    printf("Date is Valid");
            
    }

}