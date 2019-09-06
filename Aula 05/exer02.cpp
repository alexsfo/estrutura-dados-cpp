#include <iostream>
using namespace std;

struct endereco{
    string rua;
    int num;
    string bairro;
    string cidade;
    char uf[2];
};

struct pessoa{
    endereco end;
    string nome;
    int idade;
};

endereco registrarEnd(endereco *end) {

    cout << "Rua: ";
    cin >> end->rua;
    cout << endl << "Número: ";
    cin >> end->num;
    cout << endl << "Bairro: ";
    cin >> end->bairro;
    cout << endl << "Cidade: ";
    cin >> end->cidade;
    cout << endl << "UF: ";
    cin >> end->uf;

    return *end;
};

void exibirPessoa(pessoa *p_pessoa){
    cout << endl << endl << "Nome: " << p_pessoa->nome << endl; 
    cout << "Idade: " << p_pessoa->idade << endl;
    cout << "Rua:"<< p_pessoa->end.rua << endl;
    cout << "Nº:" << p_pessoa->end.num << endl;
    cout << "Bairro: "<<p_pessoa->end.bairro<< endl;
    cout << "Cidade: " << p_pessoa->end.cidade << endl;
    cout << "UF: "<<p_pessoa->end.uf << endl << endl;
}


int main(){

    pessoa *p_pessoa = new pessoa;
    endereco *end = new  endereco;

    cout << "Informe o nome: ";
    std::cin >> p_pessoa->nome; 
    
    cout << "Informe a idade: ";
    cin >> p_pessoa->idade;
    
    p_pessoa->end = registrarEnd(end);
    
    exibirPessoa(p_pessoa);


    return 0;
}



