#include <stdio.h>

int main() {
    int paratha,vegetable,water,people,x,y,z;
    double a;
    printf("Quantity Of Paratha: \n");
    scanf("%d", &paratha);
    printf("Unit Price: \n");
    scanf("%d", &x);
    printf("Quantity Of Vegetable: \n");
    scanf("%d", &vegetable);
    printf("Unit Price: \n");
    scanf("%d", &y);
    printf("Quantity Of Mineral Water: \n");
    scanf("%d", &water);
    printf("Unit Price:\n");
    scanf("%d", &z);
     printf("Number of People: \n");
    scanf("%d", &people);
    a=(paratha*x+vegetable*y+water*z)/people;
    printf("Individual people will pay: %.2f", a);
    printf("tk");

    return 0;
}