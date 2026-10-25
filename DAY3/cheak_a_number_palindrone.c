#include <stdio.h>

int main() {
    int rev = 0, r, a, temp;

    printf("Enter a number: ");
    scanf("%d", &a);

    temp = a;

    while (a != 0) {
        r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }

    printf("Reverse = %d\n", rev);

    if (temp == rev) {
        printf("Palindrome number");
    } else {
        printf("Not a palindrome number");
    }

    return 0;
}