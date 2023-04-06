#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define rand_num(min, max) \
    ((rand() % (int)(((max) + 1) - (min))) + (min))


int get_number_input() {
    int input;
    scanf("%d", &input);
    return input;
}


int main() {
    // generate random number
    long int seed = time(NULL) % clock();
    
    srand(seed);
    
    int secret_number = rand_num(0, 100);

    // TODO: enter the number of attempts


    // start game
    printf("Enter your guessing number\n");

    while (1)
    {
        int guess = get_number_input();

        if (guess == secret_number) {
            printf("You guessed!\n");
            break;
        } else if (guess > secret_number) {
            printf("Too big!\n");
        } else if (guess < secret_number) {
            printf("Too small!\n");
        }
        else {
            printf("try again: ");
        }
    }
}
