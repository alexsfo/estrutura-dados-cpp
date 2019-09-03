#include <iostream>
using namespace std;



int subtrair(int v1, int v2, int i){

    return v1 - v2;
}


int main(){

int vetA[10], vetB[10], vetC[10], i=0;

int *pVetA = vetA;
int *pVetB = vetB;
int *pVetC = vetC;

vetA[0] = 20;

for (int i=0; i < 10; i++){
    cout << "Informe o valor da " << i+1 << " posição do vetor A: ";
    cin >> *(pVetA + i);
}

cout << endl;

for (int i=0; i < 10; i++){
    cout << "Informe o valor da " << i+1 << " posição do vetor B: ";
    cin >> *(pVetB + i);
}

cout << endl;


for (int i=0; i < 10; i++){

int a = *(pVetA + i);
int b = *(pVetB + i);


*(pVetC + i) = subtrair(a, b, i);

}

cout << endl;


for (int i=0; i < 10; i++){
    cout << "Vetor C - Posição: " << i+1 << " = " << *(pVetC+ i) << endl;
}


    return 0;
}

