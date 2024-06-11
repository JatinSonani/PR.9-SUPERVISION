#include<stdio.h>
//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files0


int main() {
    FILE *evenFile = fopen("even_numbers.txt", "w");
    FILE *oddFile = fopen("odd_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files for writing.\n");
        return 1;
    }

    for (int num = 50; num <= 70; ++num) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers written to files successfully!\n");

}
