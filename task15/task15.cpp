// task15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//task15
#include <iostream>
using namespace std;
int main()
{
    char ra[256];
    char rb[256];
    cout << "Enter two numbers for long multiplication:"<<endl;
    cout << "Enter number1: ";
    cin >> ra;     //вводиться число А,як рядок
    cout << "Enter number2: ";
    cin >> rb;//вводиться число В,як рядок

    int SIZE_A;
    int SIZE_B;
    int SIZE_C;
    SIZE_A = strlen(ra); //визначаємо довжину числа А(кількість цифр в числі А)
    SIZE_B = strlen(rb);
    SIZE_C = SIZE_B + SIZE_A;

    int* A = new int[SIZE_A];
    int* B = new int[SIZE_B];
    int* C = new int[SIZE_C];

    for (int i = 0; i <= SIZE_A - 1; i++) {

        A[i] = (int)ra[SIZE_A - 1 - i] - '0';   //переведення символів рядка в цілочисельний тип і занесення в масив в зворотньому порядку
    }
    for (int i = 0; i <= SIZE_B - 1; i++) {

        B[i] = (int)rb[SIZE_B - 1 - i] - '0';
    }




    for (int i = 0; i < SIZE_C; i++) { //заповнення масиву С нулями,на випадок, якщо добуток містить менше цифр ніж зазначено у типі
        C[i] = 0;
    }


    for (int i = 0; i < SIZE_A; i++) {   //реалізація алгоритму множення в стовпчик
        for (int j = 0; j < SIZE_B; j++) {
            C[i + j] += A[i] * B[j];

        }

    }
    for (int i = 0; i < SIZE_C - 1; i++) {  //прененесення надлишку з комірок у старші розряди
        C[i + 1] += C[i] / 10;
        C[i] = C[i] % 10;
    }
    int l = 0;
    int i = 1;
    while (C[SIZE_C - i] == 0) { //підрахунок кількості цифр добутку
        l++;
        i++;
    }
    cout << "Result of long multiplicatoin:" << endl;
    for (int i = SIZE_C - l - 1; i >= 0; i--) {        //виведення добутку
        cout << C[i];
    }
    cin.get();
    cin.get();
    return 0;
}

 