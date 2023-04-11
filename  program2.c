// Benjamin Martins
// 4/4/23

// I approached the solution by first I need to create a string and set how long each string of character is
// then had the user input both of the strings and store it. after create a pointer of a string and set it equal to the new string
// then creates two for loops to get each pointer value of the character and add it to the pointer string
// then uses an if statement to break whenever there is no more characters left

// the challenges I faced was figuring how to stop looping when all the pointers were added to the new concatenated pointer.
// first I check if there is a space then stop the loop, but that did not work, and it skipped the second word
// then I researched how to check if there is a null in a string. I learned that "\0" means null and used it in my if statement


#include <stdio.h>

int main(int argc, char *argv[]) {

    // creates the strings that the user will input by adding memory
    char string1[50];
    char string2[50];
    char newString[100];

    // stores the input into the two strings
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);

    // creates a point variable of the string
    char *str = newString;

    // loops through the length of the first string
    for (int i = 0; i < 100; i++) {
        // when there is no more characters left, break the loop
        if (string1[i] == '\0') {
            break;
        }
        // adds each character to a pointer of the new string
        *str = string1[i];
        // increments the pointer to add new value
        str++;

    }

    // loops through the length of the first string
    for (int i = 0; i < 100; i++) {
        // when there is no more characters left, break the loop
        if (string2[i] == '\0') {
            break;
        }
        // adds each character to a pointer of the new string
        *str = string2[i];
        // increments the pointer to add new value
        str++;
    }

    printf("Concatenated string: %s\n", newString);

    return 0;



}