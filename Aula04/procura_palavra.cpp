#include <iostream>
#include <string>
#include <errno.h>
#include <fstream>

using namespace std;
//O nome do arquivo a ser lido é informado no primeiro argumento de linha de comando
//e a sequência a ser procurada está no segundo argumento de linha de comando.
int main(int argc, char* argv[]){

    string linha, caracter = argv[2];
    ifstream arq(argv[1]); //cria, e já abre um arquivo chamado ARQ para leitura

     if(argc < 3){
        return 1;
    }
    
    // verifica se o arquivo foi aberto corretamente
    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }

    // lê cada linha do arquivo, e imprime a linha que possui uma certa sequencia de caracteres

    while (getline(arq, linha)) {
        if (linha.rfind(caracter) != string::npos){ //se encontrar a sequencia de caracter na linha, imprime ela
            cout << linha << endl;
        }
    }

    return 0;
}
