#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "My name is Vishal Sisodiya";

    int n = strlen(str);
    int count = 0;
    int largest = 0;
    int smallest = n + 1;

    int largest_start = -1;
    int largest_end = -1;

    int smallest_start = -1;
    int smallest_end = -1;

    int current_start = 0;

    for (int i = 0; i < n; i++)
    {
        count++;

        if (str[i] == ' ')
        {
            if (largest < count)
            {
                largest = count - 1;
                largest_start = current_start;
                largest_end = i - 1;
            }

            if (smallest > count)
            {
                smallest = count - 1;
                smallest_start = current_start;
                smallest_end = i - 1;
            }

            count = 0;
        }

        current_start = i + 1;
    }

    if (smallest > count)
    {
        smallest = count;
        smallest_start = current_start;
        smallest_end = n - 1;
    }

    if (largest < count)
    {
        largest = count;
        largest_start = current_start;
        largest_end = n - 1;
    }

    printf("Largest word: ");

    for (int i = largest_start; i <= largest_end; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nSmallest word: ");

    for (int i = smallest_start; i <= smallest_end; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "My name is Vishal Sisodiya";
    int n = strlen(str);

    int count = 0;
    int largest = 0;
    int smallest = n + 1;
    int start = 0;

    for (int i = 0; i < n; i++) {
        count++;
        if (str[i] == ' ') {
            if (count-1 > largest) {
                largest = count-1;
                start = i-largest;
            }
            if (count-1 < smallest) {
                smallest = count-1;
            }
            count = 0;
        }
    }

    // Check if the last word is the largest or smallest
    if (count > largest) {
        largest = count;
        start = n-count;
    }
    if (count < smallest) {
        smallest = count;
    }

    // Print the largest and smallest word
    printf("Largest word: ");
    for (int i = start; i < start+largest; i++) {
        printf("%c", str[i]);
    }

    printf("\nSmallest word: ");
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' && count == smallest) {
            for (int j = i-count; j < i; j++) {
                printf("%c", str[j]);
            }
            break;
        }
        else if (str[i] == ' ') {
            count = 0;
        }
        else {
            count++;
        }
    }

    return 0;
}
*/
