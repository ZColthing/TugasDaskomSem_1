#include <stdio.h>


int clientPackages() {
    float total1, total2, total3, total4, final1, final2, final3, final4;
    int option;
    printf("1) Regular (3 Days)\n2) Express (1 Days)\n3) Regular (3 Days) + Delivery\n4) Express (1 Days) + Delivery\n5) Exit\n");
    printf("Which package you want to choose? ");
    scanf("%i", &option);

    switch(option) {
        case 1:
        printf("Enter the total price from the sending page: ");
        scanf("%f", &total1);
        final1 = total1 + (total1 / 10);
        printf("The final price of your laundry is %f", final1);

        case 2:
        printf("Enter the total price from the sending page: ");
        scanf("%f", &total2);
        final2 = total2 + (total2 / 5);
        printf("The final price of your laundry is %f", final2);

        case 3:
        printf("Enter the total price from the sending page: ");
        scanf("%f", &total3);
        final3 = total3 + (total3 / 10) + 8000;
        printf("The final price of your laundry is %f", final3);

        case 4:
        printf("Enter the total price from the sending page: ");
        scanf("%f", &total4);
        final4 = total4 + (total4 / 5) +8000;
        printf("The final price of your laundry is %f", final4);

        case 5:
        return 0;

        default:
        printf("Invalid choice, Please select a valid option!");
        clientPackages();
    }
}