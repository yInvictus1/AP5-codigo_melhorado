#include <stdio.h>
int fat(num1);

int main() {
    int num;
    printf("Digite um número : ");
    scanf("%d", &num);
    if (num >= 0) {
        int res = fat(num);
        printf("O fatorial de %d é: %d\n", num, res);
    } else {
        printf("Número inválido!\n");
    }
    return 0;
}

int fat(num1){
    if(num1 == 0 || num1 == 1){
        return 1;
    }else{
        return num1 * fatorial(num1-1);
    }
}
