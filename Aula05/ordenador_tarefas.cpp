#include <queue>
#include <iostream>
#include <fstream>
#include <errno.h>

using namespace std;

queue<string>imprimi_fila(queue<string>fila){
    while (! fila.empty()){
        cout << fila.front() << endl;
        fila.pop();
    }
    return fila;
}

int main(int argc, char* argv[]){

    queue<string>prioridade1;
    queue<string>prioridade2;
    queue<string>prioridade3;
    queue<string>prioridade4;
    queue<string>prioridade5;

    ifstream arq(argv[1]);

    if (! arq.is_open()){
        ::perror("Ao abrir ");
        return errno;
    }

    string linha;

    while (getline(arq, linha)){
        if (linha[0] == '1'){
            prioridade1.push(linha);
        } else if (linha[0] == '2'){
            prioridade2.push(linha);
        } else if (linha[0] == '3'){
            prioridade3.push(linha);
        } else if (linha[0] == '4'){
            prioridade4.push(linha);
        } else {
            prioridade5.push(linha);
        }
    }

    prioridade1 = imprimi_fila(prioridade1);
    prioridade2 = imprimi_fila(prioridade2);
    prioridade3 = imprimi_fila(prioridade3);
    prioridade4 = imprimi_fila(prioridade4);
    prioridade5 = imprimi_fila(prioridade5);

    return 0;
}
