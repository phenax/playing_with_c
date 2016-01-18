#include <stdio.h>

float fx_by_fpx(float guess, float input) {
    return (guess*guess - input)/(2*guess);
}

float square_rt(float first, float guess, int i) {

    if(guess== 0 && i == 0)
        guess= 1; 

    guess-= fx_by_fpx(guess, first);
    
    if(i < 100) {
        square_rt(first, guess, i+1);
    } else {
        return guess;
    }
}

int main() {
    float input,output;

    printf("Input : ");
    scanf("%f",&input);

    output= square_rt(input,0,0);

    printf("%f\n",output);

    return 0;
}