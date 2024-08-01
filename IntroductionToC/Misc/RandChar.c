#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(){

    int upper = 4;
    int lower = 0;
    char ans;
    int count=0;
    srand(time(NULL));

    char answers[5] = {'A','B','C','D','E'};
    char questions[20];
    int i;

    for (i = 0; i<20; i++){
        int r = ((rand() % (upper - lower + 1)) + lower);
        questions[i] = answers[r];
        printf("%c ",questions[i]);
    }

    printf("What is your answer?");
    scanf("%c",&ans);
    ans = toupper(ans);
    for(i=0;i<20;i++){
        if(questions[i]==ans)
            count++;
    } 
    printf("Correct answers:%d", count);



    return 0;
}