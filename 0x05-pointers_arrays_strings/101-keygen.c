#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
    char password[PASSWORD_LENGTH + 1];
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random password
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(valid_chars) - 1);
        password[i] = valid_chars[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    // Print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}
