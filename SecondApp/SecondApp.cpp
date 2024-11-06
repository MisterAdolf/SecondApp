
#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int answer;


    cout << "Programming test. Enter 0 for \"Yes\" and 1 for \"No\"." << endl;

    // 1 вопрос
    cout << "1. Does the 'int' data type exist in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 2 вопрос
    cout << "2. Is 'cout' used for output in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 3 вопрос
    cout << "3. can I use Python to create a telegram bot? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 4 вопрос
    cout << "4. Is C++ an object-oriented programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 5 вопрос
    cout << "5. Is 'while' a loop statement? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 6 вопрос
    cout << "6. Can I use the '=' operator for comparison in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 7 вопрос
    cout << "7. Can I use 'void' to declare a function without returning a value? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 8 вопрос
    cout << "8. Is 'if' a conditional statement in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 9 вопрос
    cout << "9. Is there an operator called 'elseif' in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 10 вопрос
    cout << "10. Is 'C++' a high-level programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // 11 вопрос
    cout << "11. Is 'HTML' a programming language? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 1) score++;

    // 12 вопрос
    cout << "12. Can I create my own classes in C++? (0 -> Yes, 1 -> No): ";
    cin >> answer;
    if (answer == 0) score++;

    // результат
    cout << "ur result: " << score << " correct answers of 12." << endl;

    return 0;
}

