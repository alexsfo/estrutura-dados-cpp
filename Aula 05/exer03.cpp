#include <iostream>
using namespace std;

struct aluno{
    string nome;
    string curso;
    int matricula;
};

aluno inserirAlunos(aluno alunos[], int tam){
        for (int i=0; i < tam; i++){
        
        cout << "Nome: ";
        cin >> alunos[i].nome;
        cout << "Matricula: ";
        cin >> alunos[i].matricula;
        cout << "Curso: ";
        cin >> alunos[i].curso; 
         }
    return *alunos;
}

void exibiralunos(aluno alunos[], int tam){

    for (int i=0; i < tam; i++){
        cout <<endl << "---- Aluno "<< i+1 << " ----";
        cout << endl << "Nome: " << alunos[i].nome << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Curso: " << alunos[i].curso<<endl;
    };
}


int main(){
    int tam;

    cout << "Informe a quantidade de alunos: ";
    cin >> tam;

    aluno *alunos = new aluno[tam];

    *alunos = inserirAlunos(alunos, tam);

    exibiralunos(alunos, tam);

    return 0;
}