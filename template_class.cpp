#include <iostream>
using namespace std;

// Template class to calculate the average of two values
template <class T>
class AverageCalculator {
private:
    T val1;
    T val2;

public:
    AverageCalculator(T v1, T v2) : val1(v1), val2(v2) {}

    T calculateAverage() {
        return (val1 + val2) / 2;
    }
};

int main() {
    // Creating instances of AverageCalculator with different data types
    AverageCalculator<int> intAvg(5, 10);
    AverageCalculator<double> doubleAvg(3.5, 7.5);

    // Calculating and displaying the average
    cout << "Average of two integers: " << intAvg.calculateAverage() << endl;
    cout << "Average of two doubles: " << doubleAvg.calculateAverage() << endl;

    return 0;
}
