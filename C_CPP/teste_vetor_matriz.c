#include <stdio.h>

int main (){
    
    int i,j,k; //variaveis de controle da matriz e do vetor
    // i para linha, j colula, k reserva
    printf("WADAJU SOFTWARE SOLUTIONS\n");
    printf("Teste para agenda\n");
    
    char vet[3];
    
    vet[0] = 'N';
    vet[1] = 'B';
    vet[2] = 'C';
    
    int mat[3][5];
    
    for (j = 0 ; j < 5 ; j++){
        for (i = 0 ; i < 3 ; i++){
            printf("%c: ",vet[i]);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nApresentando os resultados:\n");
    for (j = 0 ; j < 5 ; j++){
        
        for (i = 0 ; i < 3 ; i++){
            printf("%c ",vet[i]);
            printf("%d\n",mat[i][j]);
        }
    }
    
    return 0;
}
    
    
