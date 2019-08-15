#include <iostream>
using namespace std;


int main(){

int qtd = 10;
int vetorA[qtd];
int vetorB[qtd];
int vetorC[qtd];

cout << "Informe os valores para o vetor A: " << endl;
for (int i=0; i < qtd; i++){
    cout << i+1 << "º " << "valor: ";
    cin >> vetorA[i];
}
cout << endl << "Informe os valores para o vetor B: " << endl;
for (int i=0; i < qtd; i++){
    cout << i+1 << "º " << "valor: ";
    cin >> vetorB[i];
    vetorC[i] = vetorA[i] - vetorB[i];
}

    cout << endl << "------- Vetor A -------" << endl;
for (int i=0; i < qtd; i++){
    cout << i+1 << "º " << "valor: " << vetorA[i] << endl;
    
}
    cout << endl << "------- Vetor B -------" << endl;
for (int i=0; i < qtd; i++){
    cout << i+1 << "º " << "valor: " << vetorB[i] << endl;
    
}
    cout << endl << "------- Vetor C -------" << endl;
for (int i=0; i < qtd; i++){
    cout << i+1 << "º " << "valor: " << vetorC[i] << endl;
    
}



}