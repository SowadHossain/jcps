#include <stdio.h>
#include <stdlib.h> // for exit()

#define MAX_PEOPLE 2
#define MAX_LENGTH 50

// Define the structure for worker information
struct Worker {
    char name[MAX_LENGTH];
    char nationality[MAX_LENGTH];
    char destination[MAX_LENGTH];
    int age;
    float salary;
};

int main() {
    // Declare an array of structures to store worker information
    struct Worker workers[MAX_PEOPLE];

    // Input information for each worker
    for (int i = 0; i < MAX_PEOPLE; i++) {
        printf("\nWorker %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", workers[i].name); // Assuming names do not contain spaces
        printf("Nationality: ");
        scanf("%s", workers[i].nationality);
        printf("Destination: ");
        scanf("%s", workers[i].destination);
        printf("Age: ");
        scanf("%d", &workers[i].age);
        printf("Salary: ");
        scanf("%f", &workers[i].salary);
    }

    // Open a file to write the information
    FILE *file = fopen("workers_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Print information into the file
    for (int i = 0; i < MAX_PEOPLE; i++) {
        fprintf(file, "Worker %d:\n", i + 1);
        fprintf(file, "Name: %s\n", workers[i].name);
        fprintf(file, "Nationality: %s\n", workers[i].nationality);
        fprintf(file, "Destination: %s\n", workers[i].destination);
        fprintf(file, "Age: %d\n", workers[i].age);
        fprintf(file, "Salary: %.2f\n", workers[i].salary);
        fprintf(file, "\n");
    }

    // Close the file
    fclose(file);

    printf("Worker information has been written to workers_info.txt.\n");

    return 0;
}
