#include <stdio.h>
#include <string.h>
#define SIZE 20

void fit(char *);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int * ptr = arr;
    char str[] = "Hello World! Hello World!";
    fit(str);
    printf("%s\n", str);
    printf("%d\n", ptr[2]);
}

void fit(char * string) {
    if (strlen(string) > SIZE) {
        string[SIZE] = '\0';
    }
}