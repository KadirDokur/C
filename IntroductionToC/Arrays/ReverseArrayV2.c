#include <stdio.h>

int main(){


    
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(original) / sizeof(original[0]);
    


    printf("BEFORE REVERSING\n");
    for (int i = 0; i < size; i++){
        printf("%d ", original[i]);
    }

    //Same operation using single array
    for (int i = 0; i <= size/2; i++){
        int temp = original[i];
        original[i] = original[size -1 -i];
        original[size -1 -i] = temp;
    }

    printf("\nAFTER REVERSING\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",original[i]);
    }
    
    return 0;
}