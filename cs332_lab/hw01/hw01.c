#include <stdio.h>
#include "hw01.h"



int main(){



    int n=123;
    printf("%d\n",sumOfDigits(n));

    int arr[]= {4,8,2,10,6};
    printf("%d\n", UABMaxMinDiff(arr,5));

   

    int array[] = {1, 2, 3, 4};

    int* new_arr = replaceEvenWithZero(array, 4);

    printf("[");
    for (int i = 0; i < 4; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("]");
    free(new_arr);

    printf("\n");


    int n_perfectsquare = 15;

    if(perfectSquare(n_perfectsquare)){
        printf("True\n");
    }else{
        printf("False\n");
    }
    

    char s[]= "Hello World";
    printf("%d\n", countVowels(s));




    









   return 0;

}