#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

// Функція для виведення масиву рекурсивно
void COUT(int mas[], int size, int i = 0) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << mas[i] << " ";
    COUT(mas, size, i + 1);
}

// Рекурсивна функція для обчислення кількості парних елементів масиву
int CountEven(int mas[], int size, int i = 0) {
    if (i == size) return 0;  // Якщо досягнуто кінця масиву, повертаємо 0
    return ((mas[i] % 2 == 0) ? 1 : 0) + CountEven(mas, size, i + 1);  // Якщо парне, додаємо 1, інакше 0
}

int main() {
    srand((unsigned)time(0)); // Генерація випадкових чисел
    setlocale(LC_CTYPE, "ukr"); // Українська локалізація

    const int SIZE = 10;
    int a[SIZE]; // Одновимірний масив на 10 елементів

    // Заповнення масиву випадковими числами від -20 до 34
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 55 - 20; // Випадкові числа в діапазоні (-20...34)
    }

    cout << "Початковий масив: " << endl;
    COUT(a, SIZE); // Виведення початкового масиву

    int count = CountEven(a, SIZE); // Обчислення кількості парних елементів
    cout << "Кiлькiсть парних елементiв: " << count << endl;

    return 0;
}
