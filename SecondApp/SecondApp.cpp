
#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int answer;


    cout << "Programming test. Enter 0 for \"Yes\" and 1 for \"No\"." << endl;

    // 1 ������
    cout << "1. Does the 'int' data type exist in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 2 ������
    cout << "2. Is 'cout' used for output in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 3 ������
    cout << "3. can I use Python to create a telegram bot? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 4 ������
    cout << "4. Is C++ an object-oriented programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 5 ������
    cout << "5. Is 'while' a loop statement? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 6 ������
    cout << "6. Can I use the '=' operator for comparison in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 7 ������
    cout << "7. Can I use 'void' to declare a function without returning a value? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 8 ������
    cout << "8. Is 'if' a conditional statement in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 9 ������
    cout << "9. Is there an operator called 'elseif' in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 10 ������
    cout << "10. Is 'C++' a high-level programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 11 ������
    cout << "11. Is 'HTML' a programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 12 ������
    cout << "12. Can I create my own classes in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // ���������
    cout << "ur result: " << score << " correct answers of 12." << endl;

    return 0;
}

