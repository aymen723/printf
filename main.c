#include "main.h"
int main(void)
{
    int age = 25;
    myprintf("My name is %s and I am %d years old.\n", "Snehasish", age);
    double pi = 3.14;
    myprintf("The value of pi is %.2f.\n", pi);
    // Print a date and time.
    myprintf("%s %s\n", "Today is", __DATE__);
    myprintf("%s %s\n", "The time is", __TIME__);

    // Print a list of numbers.
    int numbers[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        myprintf("%d\n", numbers[i]);
    }

    // Print a table of data.
    myprintf("| Name | Age | Occupation |\n");
    myprintf("| Snehasish | 25 | AI Engineer |\n");
    myprintf("| Alice | 30 | Software Engineer |\n");
}