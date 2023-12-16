#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer {
    char username[50];
    char password[50];
};

struct Data {
    char username[50];
    char status[20];
};

void checkLaundryStatus(const char *username) {
    FILE *file = fopen("data.Bin", "rb");

    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    struct Data status;

    while (fread(&status, sizeof(struct Data), 1, file) == 1) {
        if (strcmp(status.username, username) == 0) {
            printf("Your laundry status: %s\n", status.status);
            fclose(file);
            return;
        }
    }

    printf("No laundry status found for your account.\n");
    fclose(file);
}

int main() {
    char username[50];
    printf("Enter your username: ");
    scanf("%s", username);

    checkLaundryStatus(username);

    return 0;
}