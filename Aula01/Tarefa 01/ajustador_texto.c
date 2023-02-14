#include <iostream>
#include <cctype>

using namespace std;

void maiuscula(char *str) {
    int i, j, num;
    for (i = 0; str[i]; i++) {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            str[i] = toupper(str[i]);
        } else if (str[i-1] == ' ' && str[i] == ' '){
            num = i;
            while (str[j+1] != '\n'){
                j = i;
                str[i] = str[j+1];
                i++;
            }
            i = num - 1;
            j = 0;
        }
    }
}

int main(){

    char str[100];

    cout << "Entre com seu nome completo: ";
    fgets(str, sizeof (str), stdin); // le a string do usuario
    maiuscula(str); //funcao que trata a string, removendo espaços e deixando a primeira letra maiuscula
    cout << str << endl;

    return 0;
}
