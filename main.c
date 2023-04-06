#include<stdio.h>

int get_number_input() {
    int input;
    printf("Enter your guessing number\n");
    scanf("%d", &input);
    return input;
}


int main() {
    // get input number
    int guessing = get_number_input();

    printf("your try is: %d", guessing);
}