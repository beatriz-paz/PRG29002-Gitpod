#include <iostream>
#include <string>

using namespace std;

int main() {

    string data;
    int dia, mes, ano;
    bool data_certa = false;

    getline(cin, data);

    if (data.size() != 10 || data[2] != '/' || data[5] != '/') {
        cout << "data invalida" << endl;
        return false;
    }

    try{
        dia = std::stoi(data.substr(0, 2));
        mes = std::stoi(data.substr(3, 2));
        ano = std::stoi(data.substr(6, 4));
    } catch(...) {
        return false;
    }

    if (1 > dia > 31){
        cout << "data invalida" << endl;
        return false;
    }

    if (1 > mes > 12){
        cout << "data invalida" << endl;
        return false;
    }

    if (0001 > ano > 9999){
        cout << "data invalida" << endl;
        return false;
    }


    switch (dia) {

        case 31:
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                    data_certa = true;
                } else {
                    data_certa = false;
                }
            break;

        case 30:
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    data_certa = true;
                } else {
                    data_certa = false;
                }
            break;

        case 28:
            if (mes == 2) {
                    data_certa = true;
                } else {
                    data_certa = false;
                }
            break;

        case 29:
            if (mes == 2) {
                    data_certa = true;
                } else {
                    data_certa = false;
                }
            break;

        default:
            data_certa = true;
    }

    if (data_certa) {
        cout << data << endl;
    } else {
        cout << "data invalida" << endl;
    }

    return 0;
}
