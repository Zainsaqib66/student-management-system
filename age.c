#include <stdio.h>
#include <time.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Get the current year
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int currentYear = local->tm_year + 1900;

    /* Calculate birth year */
    int birthYear = currentYear - age;

    printf("Your birth year is: %d\n", birthYear);

    return 0;
}
