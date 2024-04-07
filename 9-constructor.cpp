#include<bits/stdc++.h>
using namespace std;

class Constr{
    int x;
    public:
    Constr(){
        this->x=5;
    }
    Constr(int n){
        x=n;
    }
    void print(){
        cout<<x;
    }
};
int main(){
    Constr o1;
    Constr o2(9); 
    o1.print();
    cout<<endl;
    o2.print();
}