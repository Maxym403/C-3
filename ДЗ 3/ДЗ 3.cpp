// ДЗ 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    int a;
    int b;
    int c;
    char sign;
    cout << "Введіть перше число\n";
    cin >> a;
    cout << "Введіть друге число\n";
    cin >> b;
    cout << "Виберіть знак\n";
    cin >> sign;

    if (sign == '+') {
        c = a + b;
        cout << c << "\n";
    }
    else {
        if (sign == '-') {
            c = a - b;
            cout << c << "\n";
        }
        else {
            if (sign == '*') {
                c = a * b;
                cout << c << "\n";
            }





            switch (sign) {
            case'/':
                c = a / b;
                cout << c << "\n";
                break;
            case'%':
                c = a % b;
                cout << c << "\n";
                break;
            }
     
   
    
    
    
    
    
    
    
    
    
    
    int choice;
    cout << "Вітаємо в грі!\n";
    cout << "Перше питання, столиця України?\n";
    cout << "1. Київ\n";
    cout << "2. Харків\n";
    cout << "3. Одеса\n";
    cout << "Вибери (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Яка середня зарплата вчителя?\n";
        cout << "1. 5000\n";
        cout << "2. 10000\n";
        cout << "3. 3000\n";
        cout << "Вибери (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Яка площа України?\n";
            cout << "1. 603628\n";
            cout << "2. 809628\n";
            cout << "3. 300000\n";
            cout << "Вибери (1/2/3): ";
            cin >> choice;

            if (choice == 1) {
                cout << "Ви виграли мільйон!\n";
            }
            else {
                cout << "Ти вибрав невірно! Гра завершена!\n";
            }
        }
        else {
            cout << "Ти вибрав невірно! Гра завершена!\n";
        }
    }
    else {
        cout << "Ти вибрав невірно! Гра завершена!\n";
    }
    
    
    
    
    
    
    string question;
    int random=(rand() % 20);
    cout << "Введіть  питання!/n";
    cin >> question;
    if (random == 0) {
        cout << "Так/n";
    }
    else {
        if (random == 1) {
            cout << "Ні/n";
        }
        else {
            if (random == 2) {
                cout << "Можливо!/n";

            }
            else {
                if (random == 3) {
                    cout << "Вірно/n";
                }
                else {
                    if (random == 4) {
                        cout << "Правильно/n";
                    }
                    else {
                        if (random == 5) {
                            cout << "Чудово!/n";
                        }
                        else {
                            if (random == 6) {
                                cout << "Прекрасно!/n";
                            }
                            else {
                                if (random == 7) {
                                    cout << "Хто-зна/n";
                                }
                                else {
                                    if (random == 8) {
                                        cout << "Не знаю!/n";
                                    }
                                    else {
                                        if (random == 9) {
                                            cout << "Мабуть!/n";
                                        }
                                        else {
                                            if (random == 10) {
                                                cout << "Цікаво/n";
                                            }
                                            else {
                                                if (random == 11) {
                                                    cout << "Час покаже/n";
                                                }
                                                else {
                                                    if (random == 12) {
                                                        cout << "Звучить правдоподібно/n";

                                                    }
                                                    else {
                                                        if (random == 13) {
                                                            cout << "Можливо, але не факт./n";
                                                        }
                                                        else {
                                                            if (random == 14) {
                                                                cout << "Все може бути./n";
                                                            }
                                                            else {
                                                                if (random == 15) {
                                                                    cout << "Не можу відповісти однозначно/n";
                                                                }
                                                                else {
                                                                    if (random == 16) {
                                                                        cout << "Давай подумаємо над цим пізніше/n";
                                                                    }
                                                                    else {
                                                                        if (random == 17) {
                                                                            cout << "Не вірно/n";
                                                                        }
                                                                        else {
                                                                            if (random == 18) {
                                                                                cout << "Не коректно/n";
                                                                            }
                                                                            else {
                                                                                if (random == 19) {
                                                                                    cout << "Подумай/n";
                                                                                }
                                                                                else {
                                                                                    if (random == 20) {
                                                                                        cout << "Не так!/n";
                                                                                    }
                }  
            }
        }
    }
   
}

