#include<iostream>
using namespace std;
class Distance {
    private:
    int feet;
    int inches;
    public:
    void setData(int feet, int inches){
        this->feet=feet;
        this->inches=inches;
    }
    void showDistance(){
        cout<<"Distance is "<<feet<<" feet"<<" "<<inches<<" inches"<<endl;
    }
    void add(Distance d1, Distance d2){
        feet=d1.feet + d2.feet;
        inches=d1.inches + d2.inches;
        if(inches>=12){
            feet=feet+1;
            inches=inches-12;
        }
    }
};
int main() {
    Distance d1, d2, d3;
    d1.setData(3, 6);
    d2.setData(9, 9);
    d3.add(d1, d2);
    d3.showDistance();
    return 0;
}