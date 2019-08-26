#include <iostream>
using namespace std;

int main(){

    int opcao = -1;
    bool cont = false;

    while (cont == false){
    float n1, n2;
    cout << "Informe o primeiro numero: ";
    cin >> n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;

    cout << "Informe a operação desejada: " << endl << "1 - soma" << endl << "2 - subtração"<<endl<< "3 - divisão" <<endl<<"4 - multiplicação" << endl <<  endl <<"0 - encerrar" << endl;  ;
    cin >> opcao;

    switch (opcao){
        case 1:
        cout << "Resultado: " << n1 + n2 << endl;
        break;

        case 2:
        cout << "Resultado: " << n1 - n2 << endl;
        break;

        case 3:
        cout << "Resultado: " << n1 / n2 << endl;
        break;

        case 4:
        cout << "Resultado: " << n1 * n2 << endl;
        break;

        case 0:
        cont == true;
        cout << "Encerrado.";
        exit;
        break;

    default:
        break;
    }

 
    }

    return 0;
}