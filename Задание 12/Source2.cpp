#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n;
    char c;
    printf("������� �����������:");
    scanf_s("%c", &c);
    printf("������� �������:");
    scanf_s("%i", &n);
    switch (c) {
    case '�':
        switch (n) {
        case 1:
            c = '�';
            break;
        case 0:
            c = '�';
            break;
        case -1:
            c = '�';
            break;
        }
        break;
    case '�':
        switch (n) {
        case 1:
            c = '�';
            break;
        case 0:
            c = '�';
            break;
        case -1:
            c = '�';
            break;
        }
    case '�':
        switch (n) {
        case 1:
            c = '�';
            break;
        case 0:
            c = '�';
            break;
        case -1:
            c = '�';
            break;
        }
        break;
    case '�':
        switch (n) {
        case 1:
            c = '�';
            break;
        case 0:
            c = '�';
            break;
        case -1:
            c = '�';
            break;
        }
    }
    printf("%c\n", c);
    return 0;
}