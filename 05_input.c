#include<stdio.h>
int main(){
    //Number user input
    int a; 
    printf("Enter a is: ");
    scanf("%d", &a); //scanf is user input
    printf("The value of a is %d\n", a);
    //float user input
    float b;
    printf("Enter b is: ");
    scanf("%f",&b);
    printf("The value of b is: %f\n",b);
    // Character user input
    char c;
    printf("Enter c is: ");
    scanf(" %c",&c);
    printf("The value of b is: %c",c);

    return 0;
}
