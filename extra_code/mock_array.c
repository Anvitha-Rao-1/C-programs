#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    // Condition for multiplication
    if (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        return 0;
    }
    
    int first[10][10], second[10][10], result[10][10];
    
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            scanf("%d", &first[i][j]);
        }
    }
    
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            scanf("%d", &second[i][j]);
        }
    }
    
    // Initializing result matrix to 0
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0; //imprt
        }
    }
    
    // Multiplying matrices
    for (int i = 0; i < r1; ++i) { 
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) { //c1=c2
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
