#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string palavra, palavra_maiuscula;

    getline(cin, palavra);

    //aloca espaço necessário para a nova string
    palavra_maiuscula.resize(palavra.size());

    for (int i = 0; i < palavra.size(); ++i) {
        palavra_maiuscula[i] = toupper(palavra[i]);
    }

    cout << palavra_maiuscula;

    return 0;
}
