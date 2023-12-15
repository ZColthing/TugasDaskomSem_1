#include <stdio.h>
#include "client_packages.h"

int clientSending() {
    int  option, num, amount1, amount2, amount3, total2, total3, total4;
    float total1, weight;
    printf("1) Regular Clothes\n2) White Clothes\n3) Rug\n4) Shoes\n5) Exit\n");
    printf("Choose what you want to laundry: ");
    scanf("%i", &option);

    switch(option) {
        case 1:
        printf("Enter the weight of your clothes(kg): ");
        scanf("%f", &weight);
        total1 = weight * 8000;
        printf("Price for your Regular Clothes laundry is Rp.%f\n", total1);
        printf("Do you want to\n1) Packages and Payment\n2) Exit\n");
        printf("Choose what you want next: ");
        scanf("%i", &num);
        if (num == 1) {
            clientPackages();
        }
        if (num == 2) {
            //Client_Homepage();
        } else {
            printf("Invalid choice, Please select a valid option!\n");
        }
        break;

        case 2:
        printf("Enter how many White Clothes you want to laundry: ");
        scanf("%i", &amount1);
        total2 = amount1 * 10000;
        printf("Price for your White Clothes laundry is Rp.%f\n", total2);
        printf("Do you want to\n1) Packages and Payment\n2) Exit\n");
        printf("Choose what you want next: ");
        scanf("%i", &num);
        if (num == 1) {
            clientPackages();
        }
        if (num == 2) {
            //Client_Homepage();
        } else {
            printf("Invalid choice, Please select a valid option!\n");
        }
        break;

        case 3:
        printf("Enter how many Rug you want to laundry: ");
        scanf("%i", &amount2);
        total3 = amount2 * 10000;
        printf("Price for your rug laundry is Rp.%i\n", total3);
        printf("Do you want to\n1) Packages and Payment\n2) Exit\n");
        printf("Choose what you want next: ");
        scanf("%i", &num);
        if (num == 1) {
            clientPackages();
        }
        if (num == 2) {
            //Client_Homepage();
        } else {
            printf("Invalid choice, Please select a valid option!\n");
        }
        break;

        case 4:
        printf("Enter how many shoes you want to laundry: ");
        scanf("%i", &amount3);
        total4 = amount3 * 10000;
        printf("Price for your shoes laundry is Rp.%i\n", total4);
        printf("Do you want to\n1) Packages and Payment\n2) Exit\n");
        printf("Choose what you want next: ");
        scanf("%i", &num);
        if (num == 1) {
            clientPackages();
        }
        if (num == 2) {
            //Client_Homepage();
        } else {
            printf("Invalid choice, Please select a valid option!\n");
        }
        break;

        case 5:
        printf("Hooh\n");

        default:
        printf("Invalid choice, Please select a valid option!\n");
        clientSending();
    }

}
