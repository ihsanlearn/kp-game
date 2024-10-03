#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Open the file
    FILE *file = fopen("weapons.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Arrays to hold the data
    char weapons[10][50];  // Assuming a maximum of 10 weapons, each with a max name length of 50
    int values[10];        // Assuming a maximum of 10 values
    int count = 0;         // To count how many items are read

    // Reading the file line by line
    while (fscanf(file, "%[^|] | %d\n", weapons[count], &values[count]) != EOF) {
        // Removing any trailing space in the weapon name
        char *newline = strchr(weapons[count], '\n');
        if (newline) *newline = '\0';
        count++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Weapon names and values:\n");
    for (int i = 0; i < count; i++) {
        printf("Weapon: %s, Value: %d\n", weapons[i], values[i]);
    }

    return 0;
}
