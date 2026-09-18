
#include <stdio.h>

int n;

int main(){

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Please enter element %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Given array is: [");
    for(int i = 0; i < n - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[n - 1]);

    int temp, currLoc;

    for(int i = 1; i < n; i++){
        currLoc = i;

        while(currLoc > 0 && arr[currLoc - 1] > arr[currLoc]){
            temp = arr[currLoc];
            arr[currLoc] = arr[currLoc - 1];
            arr[currLoc - 1] = temp;
            currLoc--;
        }
    }

    printf("Sorted array is: [");
    for(int i = 0; i < n - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[n - 1]);

    return 0;
}

