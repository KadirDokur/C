#include <stdio.h>

int main(){

    int original[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(original) / sizeof(original[0]);
    int reversed[size];  // Array to store reversed elements

    int k = 0;

    printf("BEFORE REVERSING\n");
    for (int i = 0; i < size; i++){
        printf("%d ", original[i]);
    }


    for (int i = size - 1; i >= 0; i--){
        reversed[k] = original[i];
        k++;
    }

    printf("\nAFTER REVERSING\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",reversed[i]);
    }
    

    return 0;
}