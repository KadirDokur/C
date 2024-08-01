#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int createAnswers(char questions[]){
    int upper = 4;
    int lower = 0;
    char answers[5] = {'A','B','C','D','E'};
    int i;

    for (i = 0; i<20; i++){
        int r = ((rand() % (upper - lower + 1)) + lower);
        questions[i] = answers[r];
        //printf("%c ",questions[i]);
    }

}

int countAnswer(char questions[], char ans){
    int count=0;
    int i;
    ans = toupper(ans);
    for(i=0;i<20;i++){
        if(questions[i]==ans)
            count++;
    } 
    printf("Correct answers:%d\n", count);
}



int main(){

    int k=1;
    char questions[20];
    char ans ='a';
    srand(time(NULL));

    while(k<=5){
        printf("What is your answer?");
        scanf("%c",&ans);
        fflush(stdin);
        createAnswers(questions);
        countAnswer(questions, ans);
        k++;
    }

    return 0;
}