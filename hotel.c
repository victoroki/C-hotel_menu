#include<stdio.h>
int main(){

    printf("\n\n**** WELCOME TO RESTAURANT ****\n\n");
    printf("\nMENU CARD\n");
    int choice, qty, total=0;
//    printf("\n\tPRODUCT\t\t\t\tPRICE\n\n1. ORANGE JUICE\t\t\t\t20KSH.\n2. MILK SHAKE\t\t\t\t50KSH.\n3. COFFEE\t\t\t\t30KSH.\n4. TEA\t\t\t\t\t10KSH.\n5. ICE-CREAM\t\t\t\t40KSH.\n\nSELECT ANYONE : ");
    printf("SELECT OPTION");
	printf("PRODUCT				PRICE\n");
    printf("1. ORANGE JUICE 	  20KSH\n");
    printf("2. MILK SHAKE		 50KSH\n");
    printf("3. COFFEE		 30KSH\n");
    printf("4. ORANGE JUICE		 10KSH\n");
    printf("5. ICE-CREAM		 40KSH\n");
    printf("SELECT OPTION\n");
	scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("ORANGE JUICE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 20;
        printf("Total Amount For Pay : %d", total);
        break;
    case 2:
        printf("MILK SHAKE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total Amount For Pay : %d", total);
        break;
    case 3:
        printf("COFFEE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 30;
        printf("Total Amount For Pay : %d", total);
        break;
    case 4:
        printf("TEA SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 10;
        printf("Total Amount For Pay : %d", total);
        break;
    case 5:
        printf("ICE-CREAM SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;
    
    default:
        printf("We are Sorry, for this....");
        break;
    }
    return 0;
}
