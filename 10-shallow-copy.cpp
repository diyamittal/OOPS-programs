#include<bits/stdc++.h>
using namespace std;
class Exmp{
    public:
        int a;
        int b;
        Exmp(int x, int y){
            a=x;
            b=y;
        }
        Exmp(Exmp &e1){
            a=e1.a;
            b=e1.b;
        }
        void show(){
            cout<<a<<" "<<b;
        }
};
int main(){
    Exmp e1(3, 4);
    Exmp e2(e1);
    e2.show();
}