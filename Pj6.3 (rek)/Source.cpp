#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// ������� ��� ��������� ������ ����������
void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}

// ���������� ������� ��� ���������� ������� ������ �������� ������
int CountEven(int mas[], int size, int i = 0) {
    if (i == size) return 0;  // ���� ��������� ���� ������, ��������� 0
    return ((mas[i] % 2 == 0) ? 1 : 0) + CountEven(mas, size, i + 1);  // ���� �����, ������ 1, ������ 0
}

int main() {
    srand((unsigned)time(0)); // ��������� ���������� �����
    setlocale(LC_CTYPE, "ukr"); // ��������� ����������

    const int SIZE = 10;
    int a[SIZE]; // ����������� ����� �� 10 ��������

    // ���������� ������ ����������� ������� �� -20 �� 34
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 55 - 20; // �������� ����� � ������� (-20...34)
    }

    cout << "���������� �����: " << endl;
    COUT(a, SIZE); // ��������� ����������� ������

    int count = CountEven(a, SIZE); // ���������� ������� ������ ��������
    cout << "�i���i��� ������ �������i�: " << count << endl;

    return 0;
}
