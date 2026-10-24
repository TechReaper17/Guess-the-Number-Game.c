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

if (attempts == 6 && Guess != Secret) {
    printf("The number was %d\n", Secret);
}
    if (Guess == Secret) {
    printf("Used %d chances\n", attempts);
    }
else {
    printf("Used %d chances. The number was %d\n", attempts, Secret);
}
}