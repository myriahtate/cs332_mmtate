#include <stdio.h>
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

    int deviation = max_value - min_value;
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
        if( s[i] == 'a' || s[i] == 'e' || s[i]== 'i' ||
            s[i] == 'o' || s[i]== 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i]== 'I' ||
            s[i] == 'O' || s[i]== 'U' ){

            sum++;
        }
    }

    return sum;
}


int main(){

    // sumOfDigits
    printf("sumOfDigits(123) = %d\n", sumOfDigits(123));
    printf("sumOfDigits(405) = %d\n", sumOfDigits(405));

    printf("\n");


    // UABMaxMinDiff
    int arr1[] = {3, 7, 2, 9};
    int arr2[] = {5, 5, 5, 5, 5, 5};

    printf("UABMaxMinDiff(arr1) = %d\n",
           UABMaxMinDiff(arr1, 4));

    printf("UABMaxMinDiff(arr2) = %d\n",
           UABMaxMinDiff(arr2, 6));

    printf("\n");


    // replaceEvenWithZero
    int arr3[] = {1, 2, 3, 4};
    int arr4[] = {2, 4, 6};

    int* new_arr1 = replaceEvenWithZero(arr3, 4);
    int* new_arr2 = replaceEvenWithZero(arr4, 3);

    printf("replaceEvenWithZero(arr3) = [");

    for(int i = 0; i < 4; i++){
        printf("%d", new_arr1[i]);

        if(i < 3){
            printf(", ");
        }
    }

    printf("]\n");


    printf("replaceEvenWithZero(arr4) = [");

    for(int i = 0; i < 3; i++){
        printf("%d", new_arr2[i]);

        if(i < 2){
            printf(", ");
        }
    }

    printf("]\n");

    free(new_arr1);
    free(new_arr2);

    printf("\n");


    // perfectSquare
    printf("perfectSquare(16) = %s\n",
           perfectSquare(16) ? "True" : "False");

    printf("perfectSquare(15) = %s\n",
           perfectSquare(15) ? "True" : "False");

    printf("\n");


    // countVowels
    printf("countVowels(\"Hello World\") = %d\n",
           countVowels("Hello World"));

    printf("countVowels(\"UAB CS\") = %d\n",
           countVowels("UAB CS"));


    return 0;
}