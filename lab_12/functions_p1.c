#include <stdio.h>

float area_rectangle=0, area_square= 0, area_triangle=0;
float length, breadth, side, base, height;

void squareArea(float s) {
    area_square=s * s; 
}

float triangleArea() {
    return (0.5 * base * height);
}

float rectangleArea(float l, float b) {
    return l * b; 
}

void displayMessage() {
    // 1. Rectangle Logic
    printf("Enter length of Rectangle(in Meters): ");
    scanf("%f", &length);
    printf("Enter breadth of Rectangle(in Meters): ");
    scanf("%f", &breadth);
    
    if (length<0||breadth<0) {
        printf("Invalid entry! Dimensions cannot be negative.\n");
    } else {
        float res_rect=rectangleArea(length, breadth);
        printf("Area of Rectangle is: %.2f\n", res_rect);
    }
    printf("\n");

    // 2. Square Logic
    printf("Enter side of Square(in Meters): ");
    scanf("%f", &side);
    
    if (side<0) {
        printf("Invalid entry! Side cannot be negative.\n");
    } else {
        squareArea(side);
        printf("Area of Square is: %.2f\n", area_square);
    }
    printf("\n");

    // 3. Triangle Logic
    printf("Enter base of Triangle(in Meters): ");
    scanf("%f", &base);
    printf("Enter height of Triangle(in Meters): ");
    scanf("%f", &height);
    
    if (base< 0||height<0) {
        printf("Invalid entry! Dimensions cannot be negative.\n");
    } else {
        float res=triangleArea();
        printf("Area of triangle is: %.2f\n", res);
    }
    printf("\n");
}

int main() {
    displayMessage();
    return 0;
}


