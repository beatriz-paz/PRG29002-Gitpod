#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAX_SECRET 100

int main()
{
    int secret;
    int guess;
    int tries;

    srand(time(NULL));  // SEMENTE - que usa da biblioteca aleatória + a time para tem os 2 últimos dígitos aleatórios

    secret = 1 + rand() % MAX_SECRET;  // pegando os 2 últimos digitos, entre 1 e 100;
    tries = 0;

    do {
        cout << "What is your  guess? ";
        cin >> guess;
        tries++;
        if (guess < secret) {
            cout << "Too low" << endl;
        } else if (guess > secret) {
            cout << "Too High" << endl;
        }
    } while (guess != secret);

    cout << "Congratulations! You guessed it in" << tries << "tries" << endl;

    return 0;
}
