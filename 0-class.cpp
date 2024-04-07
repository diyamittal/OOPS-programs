#include<iostream>
using namespace std;
class start{
    public:
        int x;
        int y;
        int function(int x, int y){
            return 2*x+3+y;
        }
};
int main(){
    start s;
    cout<<s.function(2,3);
    return 0;
}