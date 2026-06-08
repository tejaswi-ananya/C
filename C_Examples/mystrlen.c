#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') { //i/p: hello i.e., 'h','e','l','l','o','\n','\0', --> length counts till 'h','e','l','l','o','\n', -->length = 6
        length++;
    }

    if (str[length - 1] == '\n') {//fgets() stores the newline character '\n' when input is taken from the keyboard, so I wrote this code to remove
        length--;                  // it.
    }

    printf("Length of the string = %d\n", length);

    return 0;
}