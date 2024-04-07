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
    Distance add(Distance d2){
        Distance temp;
        temp.feet=feet + d2.feet;
        temp.inches=inches + d2.inches;
        return temp;
    }
};
int main() {
    Distance d1, d2, d3;
    d1.setData(3, 6);
    d2.setData(9, 1);
    d3=d1.add(d2);
    d3.showDistance();
    return 0;
}