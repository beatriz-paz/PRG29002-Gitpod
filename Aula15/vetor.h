// Cabeçalho da biblioteca de vetores
// Nesse arquivo terá apenas os protótipos das funções

#ifndef VETOR_H // Obrigatório defenir esse guardião/macro em C
#define VETOR_H

void imprime_vetor(double *v, int n);
double produto_interno(double *a, double *b, int n);
void minmax(double *v, int n, double *min, double *max);
double *soma_vetores(double *a, double *b, int n);

#endif  // Obrigatório defenir esse guardião/macro em C