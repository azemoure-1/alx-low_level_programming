#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print_error(void) {
    printf("Error\n");
    exit(98);
}

void print_usage(char *argv[]) {
    printf("Usage: %s num1 num2\n", argv[0]);
    exit(98);
}

void check_input(char *num) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (!isdigit(num[i])) {
            print_error();
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_usage(argv);
    }
    check_input(argv[1]);
    check_input(argv[2]);
    int len1 = 0, len2 = 0;
    while (argv[1][len1]) {
        len1++;
    }
    while (argv[2][len2]) {
        len2++;
    }
    int *res = calloc(len1 + len2, sizeof(int));
    if (!res) {
        print_error();
    }
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (argv[1][i] - '0') * (argv[2][j] - '0');
            int pos1 = i + j, pos2 = i + j + 1;
            int sum = product + res[pos2] + carry;
            res[pos1] += sum / 10;
            res[pos2] = sum % 10;
            carry = sum / 10;
        }
        res[i] += carry;
    }
    int i = 0;
    while (i < len1 + len2 && res[i] == 0) {
        i++;
    }
    if (i == len1 + len2) {
        printf("0\n");
    } else {
        for (; i < len1 + len2; i++) {
            printf("%d", res[i]);
        }
        printf("\n");
    }
    free(res);
    return 0;
}

