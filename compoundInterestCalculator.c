#include<stdio.h>
#include<math.h>

int main(){

    float principal=0.00, rate =0.00,total=0.0;
    int year=0, timesCompounded=0;

    printf("Enter the principal (p): ");
    scanf("%f",&principal);
    printf("Enter the interest rate (r): ");
    scanf("%f",&rate);
    rate=rate/100;
    printf("Enter the number of years: ");
    scanf("%d",&year);
    printf("Enter the number of times compounded per year: ");
    scanf("%d",&timesCompounded);

    total = principal *pow(1+rate/timesCompounded,timesCompounded*year);

    printf("After %d years, the total wil be: $%.2f",year, total);


    return 0;
}