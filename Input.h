#include <stdio.h>

#ifndef Input
#define Input
// standard get input function for this project.
// Get the character input from the player and process it to int between 0 ~ 9
int getUserInput()
{
    char ipt;
    printf("> ");
    fgets(&ipt, 2, stdin);

    int result = ipt - '0';
    // printf("Debug: you entered %d", result);

    // Verify the Input
    if (result >= 0 && result <= 9)
    {
        return result;
    }

    // Invalid Input.
    // Recursively ask the player until there is a valid input
    printf("/// Invalid input! Input must between 0 and 9! /// \n");
    return getUserInput();
}

// Get confirmation from the user
// Y: return 1; N: return 0; other: Ask again
int getUserConfirm()
{
    char ipt;

    printf("Are you sure? (Y/N) > ");
    fgets(&ipt, 2, stdin);

    switch (ipt)
    {
    case 'Y':
    case 'y':
        return 1;

    case 'N':
    case 'n':
        return 0;

    default:
        printf("/// Invalid input! ///\n");
        return getUserConfirm();
    }
}

#endif // !Input
