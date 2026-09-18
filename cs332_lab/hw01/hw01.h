#include <stdbool.h>
#include <stdlib.h>


int sumOfDigits(int n){

    if(n<=0){
        return -1;
    }

    int sum =0;

    while(n>0){
        int last_digit = n % 10;
        sum = sum + last_digit;
        n= n /10;

    }
    return sum;
   

}


int UABMaxMinDiff(int arrayOfNumbers[], int size){
    int min_value= arrayOfNumbers[0];
    int max_value= arrayOfNumbers[0];

    for(int i = 0; i<size; i++){
        if(arrayOfNumbers[i]< min_value){
            min_value = arrayOfNumbers[i];
        }
        if(arrayOfNumbers[i] > max_value){
            max_value = arrayOfNumbers[i];
        }
    }

   
    int deviation = max_value - min_value ; 
    return deviation;

}


int* replaceEvenWithZero(int arrayOfNumbers[],int size){
    int* new_arr = malloc(size * sizeof(int));
    for(int i= 0; i<size; i++){
        if(arrayOfNumbers[i] % 2 == 0){
            new_arr[i]=0;
        } else{
            new_arr[i]= arrayOfNumbers[i];
        }
        

    }
    return new_arr;
}

bool perfectSquare(int n){

    int k;

    if(n < 0){
        return false;
    }
    for(k=1; k*k <= n; k++){
        if(k*k==n){
            return true;

        }
      

    }
    return false;
    
}

int countVowels(char s []){
    int sum=0;

    for(int i=0; s[i] != 0 ; i++ ){
        if( s[i] ==  'a' || s[i] == 'e' || s[i]== 'i' || s[i] == 'o' || s[i]== 'u' || s[i] ==  'A' || s[i] == 'E' || s[i]== 'I' || s[i] == 'O' || s[i]== 'U' ){
            sum++;
        }
    }
    return sum;






}






    








