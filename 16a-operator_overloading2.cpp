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
    Counter operator++(int){
        count++;
        // Counter temp;
        // temp.count = count;
        // return temp;
        return Counter(count);
    }
};
int main(){
    Counter c1(5), c2(3);
    c1++;
    c1++;
    c2++;
    cout<<c1.getCount()<<" ";
    cout<<c2.getCount();
}