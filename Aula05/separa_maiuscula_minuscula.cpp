#include <queue>
#include <iostream>
#include <fstream>
#include <error.h>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

    queue<string>maiusculas;
    queue<string>minusculas;
    string linha, palavra;

    ifstream arq(argv[1]);

    if (! arq.is_open()){
        perror("Ao abrir ");
        return errno;
    }

    while (getline(arq, linha)){
        istringstream frase(linha);
        while (frase >> palavra){
            int i = 0;
            if (isupper(palavra[i])){ // isupper = verifica se a primeira letra é maiuscula
                maiusculas.push(palavra);
            } else{
                minusculas.push(palavra);
            }
        }
    }

    while (! maiusculas.empty()) {
        cout << maiusculas.front() << ' ';
        maiusculas.pop();
    }

    cout << endl;

    while (! minusculas.empty()) {
        cout << minusculas.front() << ' ';
        maiusculas.pop();
    }

    return 0;
}
