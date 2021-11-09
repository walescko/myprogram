#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double numero1, numero2;
    int n;
    double resultado;
    char resp;
    
    cout << "WadaJu Software Solutions" << endl;
    cout << "Calculadora Simples - 4 operações, 2 casas decimais" << endl;
    cout << "Versão if" << endl;
    
    do{ 
        cout << "Menu" << endl;
        cout << "Escolha uma operação: " << endl;
        cout << "1 - Adição" << endl;
        cout << "2 - Subtração" << endl;
        cout << "3 - Multiplicação" << endl;
        cout << "4 - Divisão" << endl;
        cout << "A opção escolhida é: ";
        cin >> n;
       
        if (n>=5){ 
            cout << " Opção Inválida Tente novamente!" << endl;
        } else if (n==1) {
                    cout << "Digite o primeiro número: ";
                    cin >> numero1;
                    cout << "Digite o segundo número: ";
                    cin >> numero2;
                    resultado = numero1 + numero2;
                    cout << numero1 << " + " << numero2 << " = " << resultado << endl;
                    } 
                        else if (n==2){
                            cout << "Digite o primeiro número: ";
                            cin >> numero1;
                            cout << "Digite o segundo número: ";
                            cin >> numero2;
                            resultado = numero1 - numero2; 
                            cout << numero1 << " - " << numero2 << " = " << resultado << endl;
                        } 
                            else if (n==3){
                                cout << "Digite o primeiro número: ";
                                cin >> numero1;
                                cout << "Digite o segundo número: ";
                                cin >> numero2;
                                resultado = numero1 * numero2;
                                cout << numero1 << " * " << numero2 << " = " << resultado << endl;
                            } 
                                else if (n==4) {
                                    cout << "Digite o primeiro número: ";
                                    cin >> numero1;
                                    cout << "Digite o segundo número: ";
                                    cin >> numero2;    resultado = numero1 / numero2;
                                    cout << numero1 << " / " << numero2 << " = " << resultado << endl;
                                }
        cout << "para sair pressecion E e enter" << endl;
        cout << "para continuar qualquer letra e enter ";
        cin >> resp;
        
    } while (resp != 'E');
    
    return 0; 
    }
 
