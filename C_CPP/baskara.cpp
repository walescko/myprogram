#include <iostream>
#include <iomanip>
#include <cmath>

//programa para resolver as raízes de uma equação do II grau

using namespace std;

int main(){
     
    double a,b,c; //coeficientes
    double x1,x2; //raízes
    double delta; //discriminante
    char resp;
    
    cout << "Walescko Software Solutions" << endl;
    cout << "Raízes da Equação de II Grau" << endl;

    do{    
    cout << "Coeficiente a: ";
    cin >> a;
    cout << "Coeficiente b: ";
    cin >> b;
    cout << "Coeficiente c: ";
    cin >> c;
    
    delta = pow(b, 2) - 4*a*c;
    
    cout << fixed << setprecision(2);
    cout << "valor do discriminante " << delta << endl;

    if ((a == 0 ) || (delta < 0)) {
        cout <<"A equação não possui raízes reais" << endl;
    } else if (delta == 0){
        x1 = -b/(2*a);
        cout << "A equação possui duas raízes reais e iguais x1 = x2 = " << x1 << endl;
        } else if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout << "A equação possui duas raízes reais iguais x1 = " << x1 << " e x2 = " << x2 << endl;
        }
        cout << "Para encerrar tecle 'e' e enter" << endl;
        cout << "Para continuar qualquer letra e enter " << endl;
        cin >> resp; 
    } while (resp != 'e');

    
    return 0;
}
