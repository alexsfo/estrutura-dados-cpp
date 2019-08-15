#include <iostream>
using namespace std;

int main() {
    int qtdNotas = 3;
    float notas[3];
    float media;
    

    for (int i=0; i < qtdNotas; i++){
      cout << "Informe a nota AV" << i+1 << ":" << endl;
      cin >> notas[i];
      };

    if (notas[0] > notas[1] || notas[0] > notas[2]){
        media += notas[0];
    };
    if (notas[1] > notas[0] || notas[1] > notas[2]){
        media += notas[1];
    }
    if (notas[2] > notas[0] || notas[2] > notas[1]){
        media += notas[2];
    }
    media  = media / 2;

    if (media >= 6){
        cout << "Aprovado. Média: " << media << endl;
    }else{
        cout << "Reprovado. Média: " << media << endl;
    }



  return 0;
}
