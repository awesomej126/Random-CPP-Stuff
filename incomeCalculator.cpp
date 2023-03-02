#include <iostream>
using namespace std;

int main() {
    float income;
    cout << "Enter your income: ";
    cin >> income;

    float fifty = 0.5 * income;
    float thirty = 0.3 * income;
    float twenty = 0.2 * income;

    cout << "$" << fifty << " should go towards your needs, $" << thirty << " should go towards your wants, " << endl;
    cout << "and $" << twenty << " should go towards your savings.";
}