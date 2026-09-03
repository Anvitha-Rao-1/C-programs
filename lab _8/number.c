#include <stdio.h>

// Function declaration outside of main
int get_digit_sum(int nu) {
    while (nu >= 10) { // Repeat until a single digit is found
        int sum = 0; //initalize sum to 0 for each iteration,73=7+3=10,1+0=1
        while (nu > 0) { 
            sum += nu % 10;
            nu /= 10;
        }
        nu = sum; // Check the new sum again the def of sum changes thats why
    }
    return nu;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function and check if the single-digit result is 1
    if (get_digit_sum(num) == 1) {
        printf("The number is a magic number.\n");
    } else {
        printf("The number is not a magic number.\n");
    }

    return 0;
}
