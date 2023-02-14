#include <iostream>

using namespace std;

int main() {
    string bar, term;

    cout << "Barometro: ";
    cin >> bar;
    cout << "Termometro: ";
    cin >> term;

    if (bar == "subindo" && term == "subindo"){
        cout << "Tempo bom, ventos questes e secos"<< endl;
    } else if (bar == "subindo" && term == "estacionario") {
        cout << "Tempo bom, ventos de leste frescos"<< endl;
    } else if (bar == "subindo" && term == "baixando"){
        cout << "Tempo bom, ventos de sul a sudeste"<< endl;
    }

    if(bar == "estacionario" && term == "subindo"){
        cout << "Tempo mudando para bom, ventos de leste"<< endl;
    } else if (bar == "estacionario" && term == "estacionario") {
        cout << "Tempo incertos, ventos variaveis"<< endl;
    } else if (bar == "estacionario" && term == "baixando"){
        cout << "Chuva provavel, ventos de sul a sudeste"<< endl;
    }

    if(bar == "baixando" && term == "subindo"){
        cout << "Tempo instavel, aproximação de frente"<< endl;
    } else if (bar == "baixando" && term == "estacionario") {
        cout << "Frente quente com chuvas prováveis"<< endl;
    } else if (bar == "baixando" && term == "baixando"){
        cout << "Chuva abundantes e ventos de sul a sudeste fortes"<< endl;
    }

    return 0;
}
