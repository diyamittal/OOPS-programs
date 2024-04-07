#include<bits/stdc++.h>
using namespace std;
class Counter{
    int count;
    public:
    Counter(){
        count=0;
    }
    Counter(int count1){
        count=count1;
    }
    int getCount(){
        return count;
    }
    void operator+(){
        count++;
    }
};
int main(){
    Counter c1, c2, c3(5);
    +c1;
    +c1;
    +c2;
    +c3;
    cout<<c1.getCount()<<" ";
    cout<<c2.getCount();
    cout<<c3.getCount();
}