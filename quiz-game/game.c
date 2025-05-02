#include <stdio.h>
#include <ctype.h>

int main()
{
    // Quiz Game
    char questions[][100] = {
        "What is largest planet in the solar system?",
        "What is the hottest planet?"};
    char options[][100] = {
        "A) Jupiter\nB) Saturn\nC) Uranus\nD) Neptune",
        "A) Mercury\nB) Venus\nC) Earth\nD) Mars"};
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char answerKey[] = {'A', 'B'};
    char guess = '\0';
    int score = 0;

    printf("\n******* QUIZ GAME *******\n");
    for (int i = 0; i < questionCount; i++)
    {
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);

        printf("\nGuess: ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        printf("\n%s\n", (guess == answerKey[i]) ? "Correct!\n" : "Wrong!\n");
    }

    return 0;
}