#include <iostream>
#include <string>

using namespace std;

int main(){

    string cpf, cpf_normalizado;
    int mult, pri_dig_ver, seg_dig_ver;
    getline(cin, cpf);


    if (cpf.size() != 11 && cpf.size() != 14){
        cout << "invalido" << endl;
        return 1;
    }

    if(cpf.size() == 14 && (cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-')) {
        cout << "invalido" << endl;
        return 1;
    }

    if (cpf.size() == 14){ //xxx.xxx.xxx-xx = 13 digitos
        mult = cpf[0]* 10 + cpf[1]* 9 + cpf[2]* 8 + cpf[4]* 7 + cpf[5]* 6 + cpf[6]* 5 + cpf[8]* 4 + cpf[9]* 3 + cpf[10]* 2;
        pri_dig_ver = (mult * 10) % 11;
        if (pri_dig_ver != cpf[12]){
            cout << "invalido" << endl;
            return 1;
        }
        mult = cpf[0]* 11 + cpf[1]* 10 + cpf[2]* 9 + cpf[4]* 8 + cpf[5]* 7 + cpf[6]* 6 + cpf[8]* 5 + cpf[9]* 4 + cpf[10]* 3 + cpf[12]* 2;
        seg_dig_ver = (mult * 10) % 11;
        if (seg_dig_ver != cpf[13]){
            cout << "invalido" << endl;
            return 1;
        }
        cout << cpf << endl;
    }

    if (cpf.size() == 11){ //xxxxxxxxxxx = 10 digitos

        mult = cpf[0]* 10 + cpf[1]* 9 + cpf[2]* 8 + cpf[3]* 7 + cpf[4]* 6 + cpf[5]* 5 + cpf[6]* 4 + cpf[7]* 3 + cpf[8]* 2;
        pri_dig_ver = (mult * 10) % 11;
        if (pri_dig_ver != cpf[9]){
            cout << "invalido" << endl;
            return 1;
        }
        mult = cpf[0]* 11 + cpf[1]* 10 + cpf[2]* 9 + cpf[3]* 8 + cpf[4]* 7 + cpf[5]* 6 + cpf[6]* 5 + cpf[7]* 4 + cpf[8]* 3 + cpf[9]* 2;
        seg_dig_ver = (mult * 10) % 11;
        if (seg_dig_ver != cpf[10]){
            cout << "invalido" << endl;
            return 1;
        }

        for (int i = 0; i < 14 ; ++i) {
            if (i != 3 && i != 7 && i != 11){
                cpf_normalizado[i] = cpf[i];
            } else if (i == 3 || i == 7){
                cpf_normalizado[i] = '.';
            } else if (i == 11){
                cpf_normalizado[i] = '-';
            } else if (7 > i && i > 3){
                cpf_normalizado[i] = cpf[i-1];
            }else if (11 > i && i > 7){
                cpf_normalizado[i] = cpf[i-2];
            } else if (i > 10){
                cpf_normalizado[i] = cpf[i-3];
            }
        }

        cout << cpf_normalizado << endl;

    }

    return 0;
}
