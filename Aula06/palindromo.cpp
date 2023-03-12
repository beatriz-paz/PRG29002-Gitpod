#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char * argv[]){

    stack<char> palindromo;

    string palavra = argv[1], palavra_invertida;

    //getline(cin, palavra);

    for(int i=0; i < palavra.size(); i++){
        palindromo.push(palavra[i]);
    }

    for(int j=0; j < palavra.size(); j++){
        palavra_invertida += palindromo.top();
        palindromo.pop();
    }

    if(palavra_invertida == palavra){
        cout << "VERDADEIRO" << endl;
    } else{
        cout << "FALSO" << endl;
    }

    return 0;
}
