#include<bits/stdc++.h>
using namespace std;

class Distance{
    int feet, inches;
    public:
        Distance(){
            feet=0;
            inches=0;
        }
        Distance(int f, int i){
            this->feet=f;
            this->inches=i;
        }
        void getDist(){
            cout<<"Enter feet";
            cin>>feet;
            cout<<"Enter inches";
            cin>>inches;
        }
        void showDist(){
            cout<<"Feet is "<<feet<<" and inches is "<<inches<<endl;
        }
        Distance operator+(Distance d2){
            int f=feet+d2.feet;
            int i=inches+d2.inches;
            if(i>=12){
                f=f+1;
                i=i-12;
            }
            return Distance(f, i);
        }
};

int main(){
    Distance d1, d2, d3;
    d1.getDist();
    d2.getDist();
    d3=d1+d2;
    d3.showDist();
}