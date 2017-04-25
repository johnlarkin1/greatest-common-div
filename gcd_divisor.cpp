#include <iostream>
#include <string>
using namespace std;

int real_modulo(unsigned long long num1, unsigned long long num2) {
    long long ans = num1 % num2;
    if (ans < 0) {
        ans += num2;
    }
    return static_cast<unsigned long long>(ans);
}
int euclidean_algorithm(int num1, int num2) {
    unsigned long long t;
    while (num2 != 0) {
        t = num2;
        num2 = real_modulo(num1,num2);
        num1 = t;
    }
    return num1;
}

int main(int argc, char* argv[]) {
    cout << "Main Program" << endl;
    cout << "------------" << endl;
    cout << "Please enter two integer numbers separated by a space: " << endl;
    unsigned long long num1, num2;
    cin >> num1;
    cout << num1 << endl;
    cin >> num2;
    cout << num2 << endl;
    unsigned long long answer = euclidean_algorithm(num1, num2);
    cout << "The answer is: " << answer << endl;
    return 0;
}
