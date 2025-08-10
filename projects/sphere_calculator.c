#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius : ");
    // Adding the error handling for the radius input
    // This is important to ensure the program doesn't crash on invalid input
    if(scanf("%lf", &radius) != 1) {
        printf("Error: Invalid input for the radius.\n");
        return 1; // Exit the program because this is a fatal error
    }

    // Calculate area, surface area, and volume of a sphere
    // Area = π * r^2
    // Surface Area = 4 * π * r^2
    // Volume = (4/3) * π * r^3
    
    area = PI * pow(radius,2);
    surfaceArea = 4 * PI *  pow(radius,2);
    volume = (4.0 / 3.0) * PI * pow(radius,3);

    printf("Area : %.2lf cm\n",area);
    printf("Surface area : %.2lf cm\n",surfaceArea);
    printf("Volume : %.2lf cm",volume);

    return 0;
}
