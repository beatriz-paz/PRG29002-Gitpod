#include <iostream>
#include <fstream>
#include <error.h>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

    string linha,  palavra;
    int num_l = 0, num_p = 0, num_c = 0;
    ifstream arq(argv[1]);

    // verifica se o arquivo foi aberto corretamente
    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }
    
    // lê cada linha do arquivo, e imprime quantas linhas tem

    while (getline(arq, linha)) {
        num_c += linha.size()+1;
        num_l++;
        istringstream inp(linha);
        while (inp >> palavra){
            num_p++;
        }
    }
    
    cout << num_l << ' ' << num_p << ' ' << num_c;

    return 0;
}
