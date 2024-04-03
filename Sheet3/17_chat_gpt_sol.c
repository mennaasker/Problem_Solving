#include <stdio.h>

int findMostRepeatedNumber() {
    int counts[10] = {0};  // Initialize count array to 0

    int maxCount = 0;
    int mostRepeatedNumber = -1;

    for (int i = 0; i < 10; i++) {
        int number;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number < 0 || number > 9)
            return -1;  // Return -1 if number is out of range

        counts[number]++;  // Increment the count for the entered number

        if (counts[number] > maxCount) {
            maxCount = counts[number];
            mostRepeatedNumber = number;
        }
    }

    return mostRepeatedNumber;
}

int main() {
    int mostRepeatedNumber = findMostRepeatedNumber();

    if (mostRepeatedNumber == -1)
        printf("Invalid input detected! Entered number is out of range.\n");
    else
        printf("The most repeated number is: %d\n", mostRepeatedNumber);

    return 0;
}