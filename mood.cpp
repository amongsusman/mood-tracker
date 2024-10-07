/*
Name: Tyler Zhang
Program Name: Mood Tracker
Date: 10/7/24
Extra: Using for loops to repeat messages
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Select what your mood is from these 5 options. Please enter the number associated with each mood." << endl;
    // prints out the mood options that the user will be able to input for
    cout << "1 - Happy" << endl;
    cout << "2 - Worried" << endl;
    cout << "3 - Sick" << endl;
    cout << "4 - Angry" << endl;
    cout << "5 - Stressed" << endl;
    int ans;
    // Stores in the input in the integer variable ans (answer)
    cin >> ans;
    int reply;
    switch (ans) {
        case 1:
            cout << "How happy are you on a scale from 1-10?" << endl;
            cin >> reply;
            if (reply > 10 || reply < 1) {
                cout << "you didn't enter a valid number from 1-10 bruhh" << endl;
            }
            else {
                for (int i = 0; i < reply; i++) {
                    cout << "that is sigma 😀" << endl;
                }
            }
            break;
        case 2:
            cout << "How worried are you on a scale from 1-10?" << endl;
            cin >> reply;
            if (reply > 10 || reply < 1) {
                cout << "you didn't enter a valid number from 1-10 bruhh" << endl;
            }
            else {
                for (int i = 0; i < reply; i++) {
                    cout << "don't be worried for my sanity 🥲" << endl;
                }
            }
            break;
        case 3:
            cout << "How sick are you on a scale from 1-10?" << endl;
            cin >> reply;
            if (reply > 10 || reply < 1) {
                cout << "you didn't enter a valid number from 1-10 bruhh" << endl;
            }
            else {
                for (int i = 0; i < reply; i++) {
                    cout << "just don't be sick so simple 🤮" << endl;
                }
            }
            break;
        case 4:
            cout << "How angry are you on a scale from 1-10?" << endl;
            cin >> reply;
            if (reply > 10 || reply < 1) {
                cout << "you didn't enter a valid number from 1-10 bruhh" << endl;
            }
            else {
                for (int i = 0; i < reply; i++) {
                    cout << "imagine being angry couldn't be me 🤬" << endl;
                }
            }
            break;
        case 5:
            cout << "How stressed are you on a scale from 1-10?" << endl;
            cin >> reply;
            if (reply > 10 || reply < 1) {
                cout << "you didn't enter a valid number from 1-10 bruhh" << endl;
            }
            else {
                for (int i = 0; i < reply; i++) {
                    cout << "stress is overrated 😰" << endl;
                }
            }
            break;
        // default case for if the user doesn't enter one of these numbers (1, 2, 3, 4, 5)
        default:
            cout << "you made an invalid choice buddy 😘" << endl;
            break;
    }
    return 0;
}