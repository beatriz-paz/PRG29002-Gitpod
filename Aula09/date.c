#include <stdio.h>

//programa que recebe a data no formato da nossa lingua, e imprime no formato da lingua inglesa

int main(void)
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("Fecruary");
            break;
        case 3 : printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    printf(" %d", day);

    switch (day) {
        case 1:
        case 21:
        case 31:
            printf("st");
            break;
        case 2:
        case 22:
            printf("nd");
            break;
        case 3:
        case 23:
            printf("rd");
        default:
            printf("th");
    }

    printf(", %d\n", year);

    return 0;
}