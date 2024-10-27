#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Menampilkan menu operasi
    printf("Pilih operasi yang ingin dilakukan (+, -, *, /): ");
    scanf(" %c", &operator);

    // Meminta input angka
    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &num1, &num2);

    // Menghitung berdasarkan operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Error: Operator tidak valid.\n");
            break;
    }

    return 0;
}
