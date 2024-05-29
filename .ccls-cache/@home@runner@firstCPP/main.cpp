#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int score1, score2, score3;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your scores (out of 100 each):\n";
    cout << "Score 1: ";
    cin >> score1;
    cout << "Score 2: ";
    cin >> score2;
    cout << "Score 3: ";
    cin >> score3;

    // Calculate average score
    int average = (score1 + score2 + score3) / 3;

    // Print remarks based on average score
    cout << "\n" << name << ", your average score is " << average << ".\n";

    if (average >= 90) {
        cout << "Excellent work! You are a top performer.\n";
    } else if (average >= 80) {
        cout << "Great job! You are performing well.\n";
    } else if (average >= 70) {
        cout << "Good effort. Keep it up!\n";
    } else if (average >= 60) {
        cout << "You are doing okay, but could improve.\n";
    } else {
        cout << "You need to put in more effort to improve your scores.\n";
    }

    return 0;
}