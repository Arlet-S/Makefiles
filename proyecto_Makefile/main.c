#include <stdio.h>

int main() {
    float base, altura;
    printf("--- Calculadora de Area de Triangulos ---\n");
    printf("Introduce la base: ");
    scanf("%f", &base);
    printf("Introduce la altura: ");
    scanf("%f", &altura);
    printf("El area es: %.2f\n", (base * altura) / 2);
    return 0;
}