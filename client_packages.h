#include <stdio.h>

struct {
    char name[50];
	char passp[50];
	char type[50];
	int balance;
	int frequency;
}sending1;

struct 
{
    float total1, total2,total3,total4,total5,total6,total7,total8;
}total;


struct {
    int amount1, amount2, amount3, amount4, amount5, amount6, amount7, amount8;
}amount1;

void clientPackages() {
    int option,option3;
    FILE *file;
    file = fopen("DataBaju.bin", "rb");
    printf("================== CUCI KILOAN ==================\n");
    printf("[1]. Regular => 2 Days => Rp.6000/Kg\n[2]. Express => 1 Day => Rp.8000/Kg\n");
    printf("=================== HOUSEHOLD ===================\n");
    printf("[3]. Sprei/Selimut/Sarung Bantal & Guling => Rp.15.000 =\n[4]. Bed Cover Kecil => Rp.10.000\n");
    printf("[5]. Bed Cover Sedang => Rp.13.000\n[6]. Bed Cover Besar => Rp.16.000\n");
    printf("==================== CLOTHES ====================\n");
    printf("[7]. White Clothes => Rp.12000\n[8]. Suit => Rp.30000\n[9]. Shoes => Rp.24000\n");
    printf("Which package you want to choose? ");
    scanf("%d", &option);

    printf("%d",option);
    

    switch(option) {
        case 1:
        while (fread(&amount1, sizeof(amount1), 1, file)) {
         
        total.total8 = amount1.amount8 * 6000;
        printf("Your washing kilos payment is %f\n", total.total8);
        
        }
        break;
    
        case 2:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
            if(amount1.amount8 !=0){
        total.total8 = amount1.amount8 * 8000;
        printf("Your washing kilos payment is %f\n", total.total8);
        }
        
        }
      
        break;

        case 3:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total1 = amount1.amount1 * 15000;
        printf("Your bed sheets/blankets/pillowcases & roll payment is %i", total.total1);
        }
    
        break;

        case 4:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total2 = amount1.amount2 * 10000;
        printf("Your small bed cover laundry payment is %i", total.total2);
        }
  
        break;

        case 5:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total3 = amount1.amount3 * 13000;
        printf("Your medium bed cover laundry payment is %i", total.total3);
        }
  
        break;

        case 6:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total4 = amount1.amount4 * 16000;
        printf("Your large bed cover laundry payment is %i", total.total4);
        }
    
        break;

        case 7:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total5 = amount1.amount5 * 12000;
        printf("Your white clothes laundry payment is %i", total.total5);
        }
     
        break;

        case 8:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total6 = amount1.amount6 * 30000;
        printf("Your medium bed cover laundry payment is %i", total.total6);
        }
    
        break;

        case 9:
        while (fread(&amount1, sizeof(amount1), 1, file) == 1) {
        total.total7 = amount1.amount7 * 24000;
        printf("Your medium bed cover laundry payment is %i", total.total7);
        }
   
        break;

        default:
        printf("Invalid choice, Please select a valid option!");
       
    }
      fclose(file);

}