#include <stdio.h>


/*to compile the program you use gcc file_name -o name of your choice*/
/*to run the program to test it out you do ./the name of your choice and it will run your program*/

 /*variable to store number user inputted*/
int given_number;


int main(){

    /*Ask user to enter num */
    printf("Enter a number:");
    /*store the user input to the variable given number */
    scanf("%d" , &given_number);

    /*assuming the num is prime*/
    int is_prime = 1;

    /*num less than or equal to 1 is not prime*/
    if( given_number <= 1){
        is_prime =0;
        /*check to see if the given num divides evenly*/
    }else{
        for(int i = 2 ; i < given_number; i++ ){
            /*if it divides evenly not prime*/
            if (given_number % i == 0){
                is_prime= 0; 
                break;

            }
        }
    }
    /*if is prime is one its prime else its not*/
    if (is_prime==1){
        printf("The number is prime");
    } else{
        printf("The number is not prime");
    }


   





}