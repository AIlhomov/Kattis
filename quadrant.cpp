#include <stdio.h>   // Include the standard input/output header file.

int main()
{
    int co1, co2;   // Declare two integer variables 'co1' and 'co2' to store coordinates.

    scanf("%d %d", &co1, &co2);   // Read and store the user's input in 'co1' and 'co2'.

    if (co1 > 0 && co2 > 0)   // Check if both 'co1' and 'co2' are positive.
        printf("1");   // Print a message indicating the quadrant.
    else if (co1 < 0 && co2 > 0)   // Check if 'co1' is negative and 'co2' is positive.
        printf("2");   // Print a message indicating the quadrant.
    else if (co1 < 0 && co2 < 0)   // Check if both 'co1' and 'co2' are negative.
        printf("3");   // Print a message indicating the quadrant.
    else if (co1 > 0 && co2 < 0)   // Check if 'co1' is positive and 'co2' is negative.
        printf("4");   // Print a message indicating the quadrant.
    else if (co1 == 0 && co2 == 0)   // Check if both 'co1' and 'co2' are zero.
        printf("Origo");   // Print a message indicating that it's at the origin.

    return 0;|
}