#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*float i = 0.2;
    for ( ; i <= 2; i += 0.2) {
        // тело цикла
        cout << i << " ";
        if (i == 8) break;
        if (i == 6) continue;
        cout << "= i ";
    }  */

    /*
    Часы бьют каждый час, столько раз, сколько врпемени.
    Написать программу, которая подсчитает, сколько раз пробьют часы 
    за 12 часов
    */

    /*int sum = 0;
    for (int bom = 1; bom <= 12; bom++) {
        sum += bom;
    }
    cout << "Hours have punched " << sum << " times.\n";*/

    /*
    Пользователь с клавиатуры последовательно вводит целые числа.
    Как только пользователь введет число 0, необходимо показать сумму всех
    введенных чисел
    */

    /*int digit, sum = 0;

    for (; ;) {
        cout << "Enter digit: ";
        cin >> digit;

        if (digit == 0) break;
        sum += digit;
    }

    cout << "Sum of digits = " << sum << endl;*/

    /*
    Написать программу, которая показывает все числа, которым кратно число,
    введенное с клавиатуры
    */

    /*int digit;
    cout << "Enter digit: "; cin >> digit;

    for (int i = 2; i < digit / 2; i++) {
        if (digit % i != 0) continue;
        cout << i << " ";
    }*/

    /*
    За сутки на заводе изготавилвается 4 детали.
    Суммарное изготовление одной детали не должно превышать 120 минут.
    При этом каждая деталь проходит по 2 станка.
    Разробать программу, которая должна подсчитать кол-во качественно
    изготовленных деталей за сутки без нарушения технологии производства
    */

    /*// кол-во качественных деталей
    int amount = 0;

    // цикл для перебора 4 деталей
    for (int d = 1; d <= 4; d++) {
        //суммарное время изготовления детали
        int alltime = 0;
        // для хранения времени на станке
        int time = 0;

        // запрашиваем время на первом станке
        cout << "How much time the first machine spends for " << d
            << " parts\n";
        cin >> time;
        alltime += time;

        // проверяем не превышен ли лимит времени
        if (alltime > 120) {
            cout << "That part is defective. The time limit exceeded\n";
            continue;
        }

        // запрашиваем время на втором станке
        cout << "How much time the second machine spends for " << d
            << " parts\n";
        cin >> time;
        alltime += time;

        // проверяем не превышен ли лимит времени
        if (alltime > 120) {
            cout << "That part is defective. The time limit exceeded\n";
            continue;
        }

        // если время не было превышено на обоих станках
        // увеличиваем кол-во правильно изготовленных деталей
        amount++;
    }

    cout << "\nThe factory manufactured " << amount << " parts";*/

    /*
    Написать программу, которая проверяет пользователя на знание 
    таблицы умножения. Программа выводит на экран два числа, 
    пользователь должен ввести их
    произведение. Разработать несколько уровней сложности
    (отличаются сложностью и количеством вопросов). 
    Вывести пользователю оценку его знаний.
    */
    
    /*srand(time(0));

    int a, b; // рандомные числа
    int answer; // ответ пользователя
    int count = 0; // кол-во правильный отвтетов

    float result = 0; // итоговый средний балл верных ответов

    // легкий уровень
    for (int i = 0; i < 3; i++){
        a = rand() % 10;
        b = rand() % 10;

        cout << "Enter result: "
         << a << "*" << b << " = ";
        cin >> answer;

        if (a * b == answer) {
            count++;
        }
    }
    cout << "Amount right amswer is " << count << endl << endl;
    result += count;
    count = 0;
    // средний уровень
    for (int i = 0; i < 6; i++){
        a = rand() % 20;
        b = rand() % 20;
        cout << "Enter result: "
            << a << "*" << b << " = ";
        cin >> answer;

        if (a * b == answer) {
            count++;
        }
    }
    cout << "Amount right amswer is " << count << endl << endl;
    result += count;
    count = 0;
    // тяжелый уровень
    for (int i = 0; i < 12; i++){
        a = rand() % 30;
        b = rand() % 30;

        cout << "Enter result: "
            << a << "*" << b << " = ";
        cin >> answer;

        if (a * b == answer) {
            count++;
        }
    }
    cout << "Amount right amswer is " << count << endl << endl;
    result += count;

    cout << "Result: " << result / 21;*/

    /*
    Вывести на экран ромб из звездочек.

        *
       ***
      *****
     *******
      *****
       ***
        *
    */
    for (int i = 0, j = 1; i < 4; i++, j += 2) {
        cout << setw(4 + i) /*задает ширину строки. 
            если строка меньше ширины, то она сдвигается вправо,
            а слева заполняется пробелами*/ 
            << string(j, '*')/* вствляет заданный символ столько раз, сколько
            указанно в первом аргументе*/ << endl;
    }

    for (int i = 3, j = 5; i > 0; i--, j -= 2) {
        cout << setw(3 + i) << string(j, '*') << endl;
    }
}
