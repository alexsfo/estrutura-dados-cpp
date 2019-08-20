#include <iostream>
using namespace std;


int main(){
 struct banda
    {
        string nome;
        string tipoMusica;
        int numIntegrantes;
        int posicaoRanking;
    };

    banda bandas[5];
    int aux, TAM = 5;


   //inicializa o vetor
    for (int i=0, j = 5; i < TAM; i++, j--){

        bandas[i].nome = "Banda ";
        bandas[i].numIntegrantes = 4;
        bandas[i].tipoMusica = "brega";
        bandas[i].posicaoRanking = j;

    }

    for (int i = 0; i < TAM; i++){
        for(int j = i+1; j < 5; j++){
            if (bandas[i].posicaoRanking > bandas[j].posicaoRanking) {
                aux = bandas[i].posicaoRanking;
                bandas[i].posicaoRanking = bandas[j].posicaoRanking;
                bandas[j].posicaoRanking = aux;
            }

        }
    }
    
    //imprime as bandas por ordem do ranking

    for(int i = 0; i < TAM; i++){
        cout << bandas[i].posicaoRanking << endl;
    }

    return 0;
}
