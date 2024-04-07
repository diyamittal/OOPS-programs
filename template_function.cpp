#include <iostream>
using namespace std;

template<typename T>
// Template function to calculate the sum of two values of any type
class sum{
    public:
    T sum(T a, T b) {
        return a + b;
    }
};

int main() {
    int intSum = sum(5, 10);           // Sum of two integers
    double doubleSum = sum(3.5, 7.5);  // Sum of two doubles

    cout << "Sum of two integers: " << intSum << endl;
    cout << "Sum of two doubles: " << doubleSum << endl;

    return 0;
}
