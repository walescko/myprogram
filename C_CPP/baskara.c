#include <stdio.h>
#include <math.h>

//programa para resolver as raízes de uma equação do II grau

int main(void){
     
    double a,b,c; //coeficientes
    double x1,x2; //raízes
    double delta; //discriminante
    //char resp;
    
    printf("Walescko Software Solutions\n");
    printf("Raízes da Equação de II Grau\n");
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);
    
    delta = b*b - 4*a*c;
    
    printf("valor do discriminante %f\n", delta);

    if ((a == 0 ) || (delta < 0)) {
        printf("A equação não possui raízes reais\n");
    } else if (delta == 0){
        x1 = -b/(2*a);
        printf("A equação possui duas raízes reais e iguais x1 = x2 = %f\n", x1);
        } else if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("A equação possui duas raízes reais iguais x1 = %f e x2 = %f\n", x1, x2);
        }
        
    return 0;
}
