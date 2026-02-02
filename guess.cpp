#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;

    cout << "Guess the number (between 1 and 10): ";

    while(true) {
        cin >> guess;

        if (guess == secretNumber) {
            cout << "CORRECT!" <<endl;
            break;
        }
        else if (guess < secretNumber){
            cout << "Too Low. Try Again!";
        }
        else {
            cout << "Too High. Try Again!";

        }
    }

    return 0;
}
