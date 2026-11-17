#include <stdio.h>

int main() {
    // Variaveis simples para armazenar as vendas de cada produto por ano
    float tv_2020, noteb_2020, smart_2020;
    float tv_2021, noteb_2021, smart_2021;
    float tv_2022, noteb_2022, smart_2022;
    
    // Variaveis para guardar as medias anuais
    float media_2020, media_2021, media_2022;

    // 1. Entrada de dados para 2020
    printf("--- DADOS DE 2020 ---\n");
    printf("Digite as vendas de TV em 2020: ");
    scanf("%f", &tv_2020);
    printf("Digite as vendas de Notebook em 2020: ");
    scanf("%f", &noteb_2020);
    printf("Digite as vendas de Smartphone em 2020: ");
    scanf("%f", &smart_2020);

    // 2. Entrada de dados para 2021
    printf("\n--- DADOS DE 2021 ---\n");
    printf("Digite as vendas de TV em 2021: ");
    scanf("%f", &tv_2021);
    printf("Digite as vendas de Notebook em 2021: ");
    scanf("%f", &noteb_2021);
    printf("Digite as vendas de Smartphone em 2021: ");
    scanf("%f", &smart_2021);

    // 3. Entrada de dados para 2022
    printf("\n--- DADOS DE 2022 ---\n");
    printf("Digite as vendas de TV em 2022: ");
    scanf("%f", &tv_2022);
    printf("Digite as vendas de Notebook em 2022: ");
    scanf("%f", &noteb_2022);
    printf("Digite as vendas de Smartphone em 2022: ");
    scanf("%f", &smart_2022);

    // Calculo das medias aritmeticas
    media_2020 = (tv_2020 + noteb_2020 + smart_2020) / 3.0;
    media_2021 = (tv_2021 + noteb_2021 + smart_2021) / 3.0;
    media_2022 = (tv_2022 + noteb_2022 + smart_2022) / 3.0;

    // Exibicao das medias calculadas
    printf("\n=== RESULTADOS DAS MEDIAS ===\n");
    printf("Media de 2020: %.2f\n", media_2020);
    printf("Media de 2021: %.2f\n", media_2021);
    printf("Media de 2022: %.2f\n\n", media_2022);

    // Testes logicos com operadores relacionais (>) e logicos (&&)
    if (media_2020 > media_2021 && media_2020 > media_2022) {
        printf("O ano de 2020 teve a MAIOR media de vendas.\n");
    } 
    else if (media_2021 > media_2020 && media_2021 > media_2022) {
        printf("O ano de 2021 teve a MAIOR media de vendas.\n");
    } 
    else if (media_2022 > media_2020 && media_2022 > media_2021) {
        printf("O ano de 2022 teve a MAIOR media de vendas.\n");
    } 
    else {
        printf("Houve um empate entre as maiores medias anuais.\n");
    }

    return 0;
}
