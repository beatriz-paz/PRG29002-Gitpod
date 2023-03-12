#include <stack>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

    stack<char>inverte;
    string palavra = argv[1];
    string palavra_invertida;

    for (int i = 0; i < palavra.size(); ++i){
        inverte.push(palavra[i]);
    }

    while (! inverte.empty()){
        palavra_invertida += inverte.top();
        inverte.pop();
    }

    if (palavra == palavra_invertida){
        cout << "VERDADEIRO" << endl;
    } else{
        cout << "FALSO" << endl;
    }

    return 0;
}
