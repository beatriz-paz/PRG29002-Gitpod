#include <string>

using namespace std;

string normaliza(string nome)
{

    //Abaixo exemplo de como copiar a primeira parte do nome
    //int pos = nome.find(' ');
    //string inicio = nome.substr(0, pos);

    int pos = nome.rfind(' ');  //procura o ultimo espaço

    if (pos == string::npos) {
        return "";
    }

    string ultimo = nome.substr(pos + 1);  //copia dessa condicao ate o final

    nome = ultimo + ", " + nome.substr(0, pos);

    return nome;
}