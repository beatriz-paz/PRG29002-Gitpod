#include <iostream>

using namespace std;

int main() {

    int letras, i;
    string palavra, palavra_invertida;

    getline(cin, palavra);

    // Esse FOR conta quantas letras tem a palvra
    for (int k = 0; palavra[k]; ++k) {
        letras = k;
    }
    //Redimensiona o tamanho da string com o método 'resize'
    palavra_invertida.resize(letras + 1);

    for (i = 0; palavra[i]; ++i) {
        palavra_invertida[i] = palavra[letras];
        letras--;
    }

    palavra_invertida[i] = '\0';

    cout << palavra_invertida << endl;

    return 0;

}
