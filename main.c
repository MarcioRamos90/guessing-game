#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define rand_num(min, max) \
    ((rand() % (int)(((max) + 1) - (min))) + (min))


int get_number_input() {
    int input;
    printf("Enter your guessing number\n");
    scanf("%d", &input);
    return input;
}


int main() {
    // get input number
    int guessing = get_number_input();

    printf("\nyour try is: %d", guessing);
    
    // generate random number
    long int seed = time(NULL) % clock();
    
    srand(seed);
    
    int secret_number = rand_num(70, 100);

    printf("\nThe secret: %d", secret_number);
}
