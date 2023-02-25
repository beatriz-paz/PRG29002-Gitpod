#include <iostream>

using namespace std;

int main(){

    int qtd_caracter = 0;
    int qtd_palavra = 1;
    bool na_palavra = false;

    string frase;

    getline(cin, frase);

    for(char c: frase){ //percorre cada caracter da frase
        if (isalpha(c)){  //se o caracter da frase for letra
            qtd_caracter++;
            na_palavra = true;
        } else if (isspace(c)){ //verifica se o caracter é um espaço em branco
            if (na_palavra){
                qtd_palavra++;
                qtd_caracter++;
                na_palavra = false;
            }
        } else {
            qtd_caracter++;
        }
    }

    if (frase == ""){
        cout << 0 << " " << 0;
    } else{
        cout << qtd_palavra << " " << qtd_caracter;

    }

    return 0;
}
