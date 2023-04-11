// Benjamin Martins
// 4/4/23

// I approached this solution by first creating getting the user inputs like the length and elements in the array.
// Then I stored each user input into an int and array variables. Then I created a pointer variable of the first element in the array
// Then used a for-loop to loop through each element of the array. lastly I used an if statement to check if each pointer is larger
// or smaller than the next pointer and updated the variables based on that.

// The challenges I faced was trying to figure out how to get each element of a pointer because you are unable to use arr[i] for it
// So I researched a learned that you can get the next pointer by *(arr + 1) and replaced i with 1


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
    printf("Enter the elements of the array: ");

    // uses a loop to stores values of the array
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }


    // stores the point value of the first element in array
    int *smallest = &arr[0];
    int *largest = &arr[0];

    // uses a loop and the first element to get the largest value
    for (int i = 1; i < length; i++) {
        // uses (arr + 1) to get the next pointer value in the array
        if (*largest < *(arr + i)) {
            largest = &arr[i];
        }
    }

    // uses a loop and the first element to get the smallest value
    for (int i = 1; i < length; i++) {
        // uses (arr + 1) to get the next pointer value in the array
        if (*smallest > *(arr + i)) {
            smallest = &arr[i];
        }
    }

    printf("Maximum value: %d\n", *largest);
    printf("Minimum value: %d\n", *smallest);

    return 0;



}