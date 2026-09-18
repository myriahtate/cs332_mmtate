#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int n;

int main(){

    printf("Enter the number of strings: ");
    scanf("%d", &n);


    char** arr = malloc(n * sizeof(char*));

    char user_string[100];

    for(int i=0; i<n; i++){
        printf("Enter string %d: " , i + 1);
        scanf("%s", user_string);
        printf("Length of string: %lu\n" , strlen(user_string));
        arr[i] = malloc((strlen(user_string) + 1)*sizeof(char)) ;
        strcpy(arr[i], user_string);
    }
    
    printf("Given array: ");
    for(int i=0; i < n; i++){
        printf("%s", arr[i]);
        printf(" ") ;
    }

    printf("\n");

    char* temp;
    int currLoc;

    for(int i = 1; i < n; i++){
        currLoc = i;

        while(currLoc > 0 && strcmp(arr[currLoc - 1] , arr[currLoc]) > 0){
            temp = arr[currLoc];
            arr[currLoc] = arr[currLoc - 1];
            arr[currLoc - 1] = temp;
            currLoc--;
        }
    }

    printf("Sorted array is: [");
    for(int i = 0; i < n - 1; i++){
        printf("%s, ", arr[i]);
    }
    printf("%s]\n", arr[n - 1]);

    return 0;
}






