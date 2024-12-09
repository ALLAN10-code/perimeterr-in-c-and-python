#include <stdio.h>

int main() {
    float length, breadth, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    if (length <= 0 || breadth <= 0) {
        printf("Error: Length and breadth must be positive values.\n");
        return 1;
    }
    perimeter = 2 * (length + breadth);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
}



