#include<stdio.h>
#include<string.h>

int main(){

    char item[50]="";
    float price =0.0f;
    int quantity=0;
    float totalPrice =0.0f;
    char currency='$';

    printf("What item would you like to buy?: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';

    printf("What is the price for each?: ");
    scanf("%f",&price);
    printf("How many would you like?: ");
    scanf("%d",&quantity);

    totalPrice= price*quantity;

    printf("\nYou have bought %d %s\n",quantity,item);
    printf("Total: %c%.2f",currency,totalPrice);

    return 0;
}