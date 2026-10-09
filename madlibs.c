#include <stdio.h>
#include <string.h>
#define SIZE 50 
void getWord(const char *prompt, char *word) {
    printf("%s: ", prompt);
    fgets(word, SIZE, stdin);
    word[strcspn(word, "\n")] = '\0';
}
void story1(void) {
    char name[SIZE], adjective[SIZE], noun[SIZE], verb[SIZE], place[SIZE];
    printf("\n--- Story 1: A Crazy Day ---\n\n");
    getWord("Enter a name", name);
    getWord("Enter an adjective", adjective);
    getWord("Enter a noun", noun);
    getWord("Enter a verb (ending in -ing)", verb);
    getWord("Enter a place", place);
    printf("\n=========== YOUR STORY ===========\n");
    printf("One morning, %s woke up feeling very %s.\n", name, adjective);
    printf("On the way to %s, they found a giant %s on the road.\n", place, noun);
    printf("Instead of being scared, %s started %s with joy!\n", name, verb);
    printf("It was the most %s day ever.\n", adjective);
    printf("==================================\n");
}
void story2(void) {
    char animal[SIZE], color[SIZE], food[SIZE], number[SIZE], verb[SIZE];
    printf("\n--- Story 2: Space Adventure ---\n\n");
    getWord("Enter an animal", animal);
    getWord("Enter a color", color);
    getWord("Enter a food", food);
    getWord("Enter a number", number);
    getWord("Enter a verb (past tense)", verb);
    printf("\n=========== YOUR STORY ===========\n");
    printf("A %s astronaut named Captain %s flew to Mars.\n", color, animal);
    printf("The ship carried %s tons of %s for the trip.\n", number, food);
    printf("When they landed, the aliens %s with excitement!\n", verb);
    printf("Captain %s waved and said, \"Take me to your leader!\"\n", animal);
    printf("==================================\n");
}
void story3(void) {
    char food[SIZE], adjective[SIZE], body[SIZE], number[SIZE], silly[SIZE];
    printf("\n--- Story 3: The Silly Recipe ---\n\n");
    getWord("Enter a food", food);
    getWord("Enter an adjective", adjective);
    getWord("Enter a body part", body);
    getWord("Enter a number", number);
    getWord("Enter a silly word", silly);
    printf("\n=========== YOUR STORY ===========\n");
    printf("To make the world's best %s, first wash your %s.\n", food, body);
    printf("Next, mix %s cups of %s sauce in a big bowl.\n", number, adjective);
    printf("Stir while shouting \"%s!\" three times.\n", silly);
    printf("Serve hot and enjoy your %s %s!\n", adjective, food);
    printf("==================================\n");
}
int main(void) {
    int choice;
    char line[SIZE];
    char again[SIZE];
    printf("***********************************\n");
    printf("*     WELCOME TO MAD LIBS C!      *\n");
    printf("***********************************\n");
    do {
        printf("\nPick a story:\n");
        printf("  1. A Crazy Day\n");
        printf("  2. Space Adventure\n");
        printf("  3. The Silly Recipe\n");
        printf("Your choice (1-3): ");
        fgets(line, SIZE, stdin);
        if (sscanf(line, "%d", &choice) != 1) {
            choice = 0;   /* not a number */
        }
        switch (choice) {
            case 1: story1(); break;
            case 2: story2(); break;
            case 3: story3(); break;
            default: printf("\nOops! Please type 1, 2 or 3.\n");
        }
        printf("\nPlay again? (y/n): ");
        fgets(again, SIZE, stdin);
    } while (again[0] == 'y' || again[0] == 'Y');
    printf("\nThanks for playing. Goodbye!\n");
    return 0;
}