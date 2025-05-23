#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int i, arr[n];
    printf("Enter array elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x, j, temp;
    printf("If you want ascending arrangement, enter 1.\nIf you want descending arrangement, enter 2.\n");
    scanf("%d", &x);
    
    if(x == 1){
        for(i = 0; i < n - 1; i++){
            for(j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
            }
            }
        }
    }
    else if(x == 2){
        for(i = 0; i < n - 1; i++){
            for(j = 0; j < n - i - 1; j++){
                if(arr[j] < arr[j + 1]){
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else{
        printf("Invalid Input.");
    }
    
    printf("The Sorted Array is: \n");
    for(i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}