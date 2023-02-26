#include <iostream>

using namespace std;

int main(){

    int dig_ano;
    string data;
    int dia[2], mes[2], ano[5];
    bool data_certa = false;

    getline(cin, data);

    for (int i = 0; i < 10; ++i) {
        if(i < 2){
            dia[i] = data[i];
        } else if(5 > i > 2){
            mes[i] = data[i];
        } else if(i > 5){
            ano[i] = data[i];
            dig_ano++;
        }
    }

    switch (dia) {
        case 31:
            if (mes == 1 || 3 || 5 || 7 || 8 || 10 || 12){
                if (ano == 4){ //ano com 4 digitos
                    data_certa = true;
                } else{
                    data_certa = false;
                }
            }
        case 30:
            if (mes == 4 || 6 || 9 || 11){
                if (ano == 4){
                    data_certa = true;
                } else{
                    data_certa = false;
                }
            }
        case 28:
            if (mes == 2){
                if (ano == 4){
                    data_certa = true;
                } else{
                    data_certa = false;
                }
            }
        case 29:
            if (mes == 2){
                if (ano == 4){
                    data_certa = true;
                } else{
                    data_certa = false;
                }
            }
    }

    if(data_certa){
        cout << data << endl;
    } else{
        cout << "data invalida" << endl;
    }


    return 0;
}
