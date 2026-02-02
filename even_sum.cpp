#include <iostream>
using namespace std;

int main() {

    int count;
    int number;
    int sum = 0;

    cout << "How many numbers do ypu want to enter? ";
    cin >> count;

    for(int i = 1; i <= count; i++){
        cout << "Enter number " << i << ": ";
        cin >> number;

        if(number % 2 == 0){
            sum += number;
        }

    }
    cout << "Sum of even numbers is : " << sum << endl;

    return 0;
}
