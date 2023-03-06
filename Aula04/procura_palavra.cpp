#include <iostream>
#include <fstream>
#include <string>
#include <errno.h>


using namespace std;

int main(int argc, char * argv[]){
    
    if(argc < 3){
        cout << "Uso: " << argv[0] << " arquivo sequencia" << endl;
        return 1;
    }
    
    ifstream arq(argv[1]); //cria um arquivo
    
    if(! arq.is_open()){
        perror("ao abrir");
        return errno;
    }
    
    string sequencia = argv[2];
    string linha;
    
    while(getline(arq, linha)){
        if(linha.find(sequencia) != string::npos){
            cout << linha << endl;
        }
        
    }
    
    
    return 0;
}
