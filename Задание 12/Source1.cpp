#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    printf("������� ����� �����:");
    scanf_s("%i", &n);
    printf("������� ����� ������:");
    scanf_s("%i", &m);
    if (n / 10 == 1)
        switch (n) {
        case 10:
            printf("�������");
            break;
        case 11:
            printf("����������� ");
            break;
        case 12:
            printf("����������� ");
            break;
        case 13:
            printf("����������� ");
            break;
        case 14:
            printf("������������� ");
            break;
        case 15:
            printf("����������� ");
            break;
        case 16:
            printf("������������ ");
            break;
        case 17:
            printf("����������� ");
            break;
        case 18:
            printf("������������� ");
            break;
        case 19:
            printf("������������� ");
            break;
        case 20:
            printf("���������");
            break;
        }
    else {
        switch (n / 10) {
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        }
        switch (n % 10) {
        case 1:
            printf("������ ");
            break;
        case 2:
            printf("������ ");
            break;
        case 3:
            printf("������ ");
            break;
        case 4:
            printf("��������� ");
            break;
        case 5:
            printf("����� ");
            break;
        case 6:
            printf("������ ");
            break;
        case 7:
            printf("������� ");
            break;
        case 8:
            printf("������� ");
            break;
        case 9:
            printf("������� ");
            break;
        }
        switch (m) {
        case 1:
            printf("������.");
            break;
        case 2:
            printf("�������.");
            break;
        case 3:
            printf("�����.");
            break;
        case 4:
            printf("������.");
            break;
        case 5:
            printf("���.");
            break;
        case 6:
            printf("����.");
            break;
        case 7:
            printf("����.");
            break;
        case 8:
            printf("�������.");
            break;
        case 9:
            printf("��������.");
            break;
        case 10:
            printf("�������.");
            break;
        case 11:
            printf("������.");
            break;
        case 12:
            printf("�������.");
            break;
        }
    }
    return 0;
}