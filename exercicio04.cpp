#include <iostream>
using namespace std;

int main(){

    struct disciplina{
        string nome[5];
        float nota[5];
    };

    struct aluno{
        string nome;
        string curso;
        disciplina disciplinas;
        int periodo;

    };

    aluno alunos[3];

    
    //aluno 1
    alunos[0].curso = "ADS";
    alunos[0].nome = "Pedro";
    alunos[0].periodo = 2;
    alunos[0].disciplinas.nome[0] = "Português";
    alunos[0].disciplinas.nome[1] = "Estrutura de Dados";
    alunos[0].disciplinas.nome[2] = "Matemática";
    alunos[0].disciplinas.nome[3] = "Segurança da Informação";
    alunos[0].disciplinas.nome[4] = "Programação II";

    alunos[0].disciplinas.nota[0] = 8.67;
    alunos[0].disciplinas.nota[1] = 8.05;
    alunos[0].disciplinas.nota[2] = 9.89;
    alunos[0].disciplinas.nota[3] = 10.00;
    alunos[0].disciplinas.nota[4] = 8.90;

    //aluno 2
    alunos[1].nome = "José";
    alunos[1].curso = "CC";
    alunos[1].periodo = 4;
    alunos[1].disciplinas.nome[0] = "Português";
    alunos[1].disciplinas.nome[1] = "Estrutura de Dados";
    alunos[1].disciplinas.nome[2] = "Matemática";
    alunos[1].disciplinas.nome[3] = "Física";
    alunos[1].disciplinas.nome[4] = "Redes";

    alunos[1].disciplinas.nota[0] = 5.67;
    alunos[1].disciplinas.nota[1] = 9.05;
    alunos[1].disciplinas.nota[2] = 6.89;
    alunos[1].disciplinas.nota[3] = 7.00;
    alunos[1].disciplinas.nota[4] = 8.40;

    //aluno 3
    alunos[2].curso = "SI";
    alunos[2].nome = "Lucas";
    alunos[2].periodo = 1;
    alunos[2].disciplinas.nome[0] = "Português";
    alunos[2].disciplinas.nome[1] = "Estrutura de Dados";
    alunos[2].disciplinas.nome[2] = "Psicologia";
    alunos[2].disciplinas.nome[3] = "Matemática Discreta";
    alunos[2].disciplinas.nome[4] = "Teoria Geral da Administração";

    alunos[2].disciplinas.nota[0] = 9.10;
    alunos[2].disciplinas.nota[1] = 8.90;
    alunos[2].disciplinas.nota[2] = 7.20;
    alunos[2].disciplinas.nota[3] = 9.00;
    alunos[2].disciplinas.nota[4] = 8.65;


    for (int i=0; i < 3; i++){
        float media;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Curso: " << alunos[i].curso << endl;
        cout << "Período: " << alunos[i].periodo << endl;
        for (int j=0; j < 5; j++ ){
            cout <<  alunos[i].disciplinas.nome[j] <<  " = " << alunos[i].disciplinas.nota[j] <<  endl;
            media += alunos[i].disciplinas.nota[j];
        } 
        cout << "Média: " <<  media / 5 <<endl;
        media = 0;
        cout << endl;

    }


    return 0;
}