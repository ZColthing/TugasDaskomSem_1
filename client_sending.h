#include <stdio.h>

int clientSending() {
    int option, weight, amount1;
    float amount2, amount3, total1, total2, total3, total4;
    printf("1) Regular Clothes\n2) White Clothes\n3) Rug\n4) Shoes\n");
    printf("Choose what you want to laundry: ");
    scanf("%i", &option);

    switch(option) {
        case 1:
        printf("Enter the weight of your clothes(kg): ");
        scanf("%f", &weight);
        total1 = weight * 8000;
        printf("Price for your Regular Clothes laundry is Rp.%f", total1);
        break;

        case 2:
        printf("Enter how many White Clothes you want to laundry: ");
        scanf("%i", &amount1);
        total2 = amount1 * 10000;
        printf("Price for your White Clothes laundry is Rp.%f", total2);
        break;

        case 3:
        printf("Enter how many Rug you want to laundry: ");
        scanf("%i", &amount2);
        total3 = amount2 * 10000;
        printf("Price for your White Clothes laundry is Rp.%i", total3);
        break;

        case 4:
        printf("Enter how many white clothes you want to laundry: ");
        scanf("%i", &amount3);
        total4 = amount3 * 10000;
        printf("Price for your white clothes laundry is Rp.%i", total4);
        break;

        default:
        printf("Invalid choice, Please select a valid option!");
        clientSending();
    }
}