#include <iostream>
using namespace std;

int main(){

    int qtd = 8;
    int vetor[qtd];
    int x, y, soma;

    for (int i=0; i < qtd; i++){
        cout << "Informe o valor da posição " << i+1 << ": ";
        cin >> vetor[i];
    }

    cout << "Informe a posição x: ";
    cin >> x;
    cout << "Informe a posição y: ";
    cin >> y;

    soma  = vetor[x-1] + vetor[y-1];

    cout << "Soma dos valores x e y (" << vetor[x-1] << " + " << vetor[y-1] << ") = " << soma << endl;




    return 0;
}