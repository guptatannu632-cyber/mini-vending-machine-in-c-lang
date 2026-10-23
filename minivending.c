#include<stdio.h>
int main()
{
    int choice, quantity;
    int price =0, total;

    printf("MINI VENDING MACHINE\n");
    printf("1. CHOCOLATE- rs. 20\n");
    printf("2. chips- rs. 30\n");
    printf("3. biscuit- rs. 5\n");
    printf("4. kurkure- rs. 10\n");
    printf("Enter your choice:");
    scanf("%d" , &choice);

    switch(choice)
    {
        case 1: 
            price =20;
            break;
        case 2:
            price =30;
            break;
        case 3:
            price =5;
            break;
        case 4:
        price =10;
        break;

        default: printf("INVALID OPERATION\n");
          
    }
    printf("enter quantity:");
    scanf("%d" , &quantity);

    if (quantity<=0)
    {
        printf("INVALID QUANTITY!");

    }
    total= price*quantity;
    printf("YOUR BILL");
    printf("price per item : rs. %d\n" ,price);
    printf("quantity=%d\n" , quantity);
    printf("total amount=%d\n" , total);

    printf("thankyou! enjoy your snack!\n");
    return 0;


}