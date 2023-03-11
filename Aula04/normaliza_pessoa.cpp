#include <iostream>
#include <string>

using namespace std;

string normaliza(string nome){

    string nome_formatado;

    size_t pos = nome.rfind(" "); //localiza a posicao do ultimo espaço do nome
    if(pos == string::npos){
        return "";
    }
    nome_formatado = nome.substr(pos+1) + ", " + nome.substr(0, pos);

    return nome_formatado;
}

int main(){

    string nome, nome_normalizado;
    getline(cin, nome);

    nome_normalizado = normaliza(nome);

    cout << nome_normalizado << endl;

    return 0;
}
