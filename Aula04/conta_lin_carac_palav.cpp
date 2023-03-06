#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int conta_palavras(string linha)
{
    istringstream inp(linha);
    int np = 0;
    string algo;

    while (inp >> algo) {
        np++;
    }

    return np;
}

int main(int argc, char *argv[])
{

    ifstream arq(argv[1]);
    if (!arq.is_open()) {
        perror("ao abrir");
        return errno;
    }

    int nc = 0, np = 0, nl = 0;

    string linha;

    while (getline(arq, linha)) {
        nl++;
        nc += linha.size() + 1;  //para ler o ultimo caracter \n
        np += conta_palavras(linha);
    }

    cout << nl << ' ' << np << ' ' << nc << endl;

    return 0;
}