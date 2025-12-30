#include <stdio.h>

int main() {
    char ch;
    int col, row;

    scanf(" %c %d %d", &ch, &col, &row);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}



