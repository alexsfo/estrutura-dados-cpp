#include <iostream>
using namespace std;

int main() {

    int qtd = 10;
    int vetor[qtd];

    for (int i=0; i < qtd; i++){
        cout << "Informe o valor da posição " << i+1 << ": " << endl;
        cin >> vetor[i];
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for (int i=0; i < qtd; i++){
        cout << "Posição " << i+1 << ": " << vetor[i] << endl;
    }



    return 0;
}