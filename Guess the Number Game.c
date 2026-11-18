#include <stdio.h>
int main () {
   int Secret = 7;
    int Guess;
int attempts = 0;

while (attempts < 6) {
    printf("Guess The Chosen Number:\n ");
    scanf("%d", &Guess);

    if (Guess > Secret) {
        printf("Too High!\n");
        printf("Try Again\n");
    }
    else if (Guess < Secret) {
        printf("Too Low!\n");
        printf("Try Again\n");
    }
   else {
    printf("Correct! It took you %d tries.\n", attempts + 1);
    break;
}   
    attempts++;
}
}
