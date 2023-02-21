#include <iostream>

using namespace std;

int main(){

    int excelente = 0, proficiente = 0, suficiente = 0, insuficiente = 0;
    char conceito;

    cout << "Entre com os conceitos (E-excelente, P-proficiente, S-suficiente) e I-insuficiente:" << endl;

    for (int i = 0; i < 3; i++) {
        cin >> conceito;
        switch(conceito) {
            case 'E':
                excelente++;
                break;
            case 'P':
                proficiente++;
                break;
            case 'S':
                suficiente++;
                break;
            case 'I':
                insuficiente++;
                break;
            default:
                cout << "Conceito inválido! Use E, P, S ou I." << endl;
                i--; // decrementa o índice para ler o conceito novamente
        }
    }

    if (excelente >= (3/2) && insuficiente == 0) {
        cout << "Nota resultante: Excelente" << endl;
    } else if (proficiente >= (3/2) && insuficiente == 0) {
        cout << "Nota resultante: Proficiente" << endl;
    } else if (insuficiente == 0) {
        cout << "Nota resultante: Suficiente" << endl;
    } else {
        cout << "Nota resultante: Insuficiente" << endl;
    }

    return 0;
}
