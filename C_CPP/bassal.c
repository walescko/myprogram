#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c=getchar()) != '\n' && c != EOF){}
}

void ler_texto (char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main (){
    int peso;
    int altura;
    int idade;
    double bassal;
    char sexo, continuar;
    
    printf("WADAJU SOFTWARE SOLUTION\n");
    printf("Consumo Bassal\n");
    continuar = 'S';
    
    while (continuar == 'S') {
    printf("Digite\n");
    printf("Peso (kg): ");
    scanf("%d", &peso);
    printf("Altura (cm): ");
    scanf("%d", &altura);
    printf("Idade (ano): ");
    scanf("%d",&idade);
    printf("Qual o sexo da pessoa? ");
    limpar_entrada();
    scanf("%c", &sexo);
    
    if (sexo == 'M'){

        bassal = 66 + (13.8 * peso) + (5 * altura) - (6.8 * idade); //HOMEM

    } else if (sexo == 'F') {

        bassal = 655+ (9.6 * peso) + (1.8 * altura) - (4.7 * idade); //MULHER */
    
    } else {
        printf ("Opção inválida.");
    }
        
    printf("\nA taxa de metabolismo bassal é %.2f calorias.", bassal);
    printf("\n\n");
    
    printf("Para continuar digite S, ou qualquer outra telca e <enter>. ");
    limpar_entrada();
    scanf("%c",&continuar);
    }
    
return 0;

}
