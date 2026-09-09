#include <stdio.h>
#include <stdlib.h>

// Helper function to clear the input buffer on invalid inputs
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int n;
    int magic = 0;
    int non_magic = 0;

    // --- VALIDATION: Array Size ---
    while (1) {
        printf("Enter the size of the array (positive integer): ");
        if (scanf("%d", &n) == 1 && n > 0) {
            break; 
        }
        printf("Invalid size! Please enter a number greater than 0.\n\n");
        clear_input_buffer();
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    // --- VALIDATION: Element Input ---
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Enter element %d: ", i + 1);
            if (scanf("%d", &arr[i]) == 1) {
                break; // Valid integer received
            }
            printf("Invalid input! Please enter a valid integer.\n");
            clear_input_buffer();
        }
    }

    printf("\n--- Analysis Results ---\n");
    
    // --- USP: True Magic Number Logic & Processing ---
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        
        // Mathematical USP: 0 is not a magic number, but positive numbers 
        // with a digital root of 1 are.
        if (temp > 0 && temp % 9 == 1) {
            printf("🔮 %d is a Magic Number (Digital Root = 1)\n", temp);
            magic++;
        } else {
            printf("❌ %d is NOT a Magic Number\n", temp);
            non_magic++;
        }
    }

    // --- USP: Summary Dashboard ---
    printf("\n==================================\n");
    printf("📊 FINAL REPORT:\n");
    printf("Total Elements Processed: %d\n", n);
    printf("Magic Numbers Found     : %d (%.1f%%)\n", magic, ((float)magic / n) * 100);
    printf("Non-Magic Numbers Found : %d (%.1f%%)\n", non_magic, ((float)non_magic / n) * 100);
    printf("==================================\n");

    free(arr); 
    return 0;
}
