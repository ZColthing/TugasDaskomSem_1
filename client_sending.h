#include <stdio.h>
#include "client_packages.h"

struct {
    char name[50];
	char passp[50];
	char type[50];
	int balance;
	int frequency;
}sending;

struct {
    int amount1, amount2, amount3, amount4, amount5, amount6, amount7;
    float  amount8;
}amount;
int sendingUserLaundry(){
    FILE * file23;
     file23 = fopen("DataBaju.bin", "wb");
        printf("=================== HOUSEHOLD ===================\n");
        printf("[1]. Sprei/Selimut/Sarung Bantal & Guling: ");
        scanf("%d", &amount.amount1);
        printf("[2]. Bed Cover Kecil: ");
        scanf("%d", &amount.amount2);
        printf("[3]. Bed Cover Sedang: ");
        scanf("%d", &amount.amount3);
        printf("[4]. Bed Cover Besar: ");
        scanf("%d", &amount.amount4);
        printf("==================== CLOTHES ====================\n");
        printf("[5]. White Clothes: ");
        scanf("%d", &amount.amount5);
        printf("[6]. Suit: ");
        scanf("%d", &amount.amount6);
        printf("[7]. Shoes: ");
        scanf("%d", &amount.amount7);
        printf("[8]. Wash Kilos: ");
        scanf("%f", &amount.amount8);
        fwrite(&amount, sizeof(amount), 1, file23);
        fclose(file23);
}
int clientSending() {
    int num, option;

 
    printf("1) Sending Laundry\n2) Exit\n");
    printf("Choose what you want: ");
    scanf("%i", &option);

    switch(option) {
        case 1:
        sendingUserLaundry();
        break;

        case 2:
        //Client_Homepage();

        default:
       printf("Invalid choice, Please select a valid option!\n");
        
    }
    printf("Do you want to\n1) Packages and Payment\n2) Exit\n");
    printf("Choose what you want next: ");
    scanf("%i", &num);
    if (num == 1) {
        clientPackages();
    }
    else if (num == 2) {
        //Client_Homepage();
    } else {
        printf("Invalid choice, Please select a valid option!\n");
    }

}
