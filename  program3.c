// Benjamin Martins
// 4/4/23

// approached this solution by first creating getting the user inputs like the length and elements in the array.
// then I created two pointer variables to hold the start and last pointer value in the array
// then created a reverse for loop to loop through the back and front of the array
// After that I created a temporary variable and exchanges it from the end. Lastly I used another loop to print out the reverse numbers

// Challenges I faced was figuring out how to exchange the values of the array to reverse order using pointers
// I researched a learned that you can create a temporary variable to hold value while you exchange another value
// I used what I researched from program1 about loop through a pointer and exchanged the values

#include <stdio.h>

int main(int argc, char *argv[]) {
    // asks user for size of the array
    int length;
    printf("Input the size of array: ");

    // stores size of array into length
    scanf("%d", &length);

    // creates array based on the size user inputed
    int arr[length];

    // asks for values of the array
    printf("Input the elements of the array: ");

    // uses a loop to stores values of the array
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    // gets the first and last pointer value of the array
    int *pointer = arr;
    int *pointer2 = arr + length - 1;

    for(int i = length * 0.5; i >= 0 ; i--) {
        // creates a temporary variable and exchanges it from the end
        int j = *(pointer+i);
        *(pointer + i) = *(pointer2 - i);
        *(pointer2 - i) = j;
    }

    // prints out the reversed array
    printf("Reversed array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}