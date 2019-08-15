#include <iostream>
using namespace std;

int main() {

    int qtd = 6;
    int valores[qtd];

    for (int i=0; i < qtd; i++){
        cout << "Informe o valor " << i+1 << endl;
        cin >> valores[i];
        
    }
    cout << endl;
    
    for (int i=0; i < qtd; i++){
        cout << "Valor " << i+1 << ": " << valores[i] << endl;
    }


return 0;
}