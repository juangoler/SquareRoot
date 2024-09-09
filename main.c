#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    
    if (valor > 0) {
        double raiz = sqrt(valor);
        printf("A raiz quadrada de %.2f é %.2f\n", valor, raiz);
    } else if (valor < 0) {
        double negativo = valor * valor;
        printf("O quadrado dele é: %.2f\n", negativo);
    }
    
    return 0;
}
