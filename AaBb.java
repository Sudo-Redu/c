package javatutorial.pattern;

import java.util.Scanner;

public class AaBb {
    public static void main(String[] args) {
        //Pattern 
       /* d
          cd
          bcd
          abcd */
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Charatere: ");
        char n = sc.next().charAt(0);
        char start = 'a';
        //Top Part
        for(char i=n; i>=start; i--){
            //left side 
            for(char j=i; j<=n; j++){
                System.out.print(j);
            }
            //spaces
            for(int k=(i-start); k>=1; k--){
                System.out.print(" ");
            }
            for(int k=(i-start); k>=1; k--){
                System.out.print(" ");
            }
            for(char j=n; j>=i; j--){
                System.out.print(j);
            }
            
            System.out.println();
        }  
        //Bottom part
        for(char i=start; i<=n; i++){
            // Bottom left abcd pattern
            for(char j=i; j<=n; j++){
                System.out.print(j);
            }
            // down first spaces 
            if(i>start){
                for(int k=start; k<i; k++){
                    System.out.print(" ");
    
                }
            }
            // Bottom Second Half Spaces
            if(i>start){
                for(int k=start; k<i; k++){
                    System.out.print(" ");
                }
            }
            //Bottom Right abcd pattern
            for(char j=n; j>=i; j--){
                System.out.print(j);
            }
            System.out.println();
        }
        //Botto
        
    }
}
