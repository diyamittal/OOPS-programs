#include<bits/stdc++.h>
using namespace std;
class Exmp{
    public:
    int a, b;
    int *p;
    Exmp(){
        p=new int;
    }
    void setdata(int x, int y, int z){
            a=x;
            b=y;
            *p=z;
        }
    void show(){
            cout<<a<<" "<<b<<" "<<*p;
    }
    Exmp(Exmp &d1){
        a=d1.a;
        b=d1.b;
        p=new int;
        *p=*(d1.p);
    }
};
int main(){
    Exmp e1;
    e1.setdata(3, 4, 5);
    //e1.show();
    Exmp e2=e1;
    e2.show();
}