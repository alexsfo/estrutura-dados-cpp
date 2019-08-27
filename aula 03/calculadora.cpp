#include <iostream>
using namespace std;

int main(){

    int opcao = -1;
    bool condicao;
    float n1, n2;
    
    while (condicao) {

    cout << "Informe a operação desejada: " << endl << "1 - soma" << endl << "2 - subtração"<<endl<< "3 - divisão" <<endl<<"4 - multiplicação" << endl <<  endl <<"0 - encerrar" << endl;  ;
    cin >> opcao;

    if (opcao != 0){
        cout << "Informe o primeiro numero: ";
        cin >> n1;
        cout << "Informe o segundo numero: ";
        cin >> n2;
    }
   
    switch (opcao){
        case 1:
        cout << endl << "Resultado: " << n1 + n2 << endl << endl;
        break;

        case 2:
        cout << endl << "Resultado: " << n1 - n2 << endl << endl;
        break;

        case 3:
        cout << endl << "Resultado: " << n1 / n2 << endl << endl;
        break;

        case 4:
        cout << endl << "Resultado: " << n1 * n2 << endl << endl;
        break;

        case 0:
        condicao = false;
        cout << endl << "Encerrado.";
    default:
        continue;
    }
    }

    return 0;
}