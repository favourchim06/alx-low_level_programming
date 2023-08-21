#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        // Generate a random ASCII character between '!' (33) and '~' (126)
        password[i] = '!' + rand() % ('~' - '!' + 1);
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return 0;
}

