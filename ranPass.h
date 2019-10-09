#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ranPass()
{
    int counter = 0;
    srandom(time(NULL));  // Correct seeding function for random()
    char randChar;

    int  passwordLength;

    printf("------------------ Random Password Generator ------------------ \n\nUse this utility to generate random strings of desired length\n( between 4 to 16 characters.)\nAnd use these strings as secure passwords for your accounts.\n\n");
    printf("------------------ Random Password Generator ------------------ \n\n");
    printf("Type in a password length: ");
    scanf("%d", &passwordLength);
    while (passwordLength > 16 || passwordLength < 4)
    {
        printf("Type in a valid password length: ");
        scanf("%d", &passwordLength);
    }


    printf("Your random password is: ");
    while(counter < passwordLength)
    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789$#"[random () % 62];
        printf("%c", randChar);
        counter++;
    }
    printf("\n"); // Stops the output from being on the same line as the prompt
    char opt[50];
    printf("0 to go to menu.\n");
    while(1)
    {
        printf("> ");
        scanf(" %[^\n]",opt);
        int l = strlen(opt);
        if (l == 1)
        {
            if (opt[0] == '0')
            {
                return 0;
            }
            else
            {
                printf("Invalid Input.\n");
            }
        }
        
        else
            {
                printf("Invalid Input.\n");
            }
    }
    return 0;
}