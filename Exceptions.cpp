#include <iostream>
using namespace std;
const int n = 3;
class Stack{
    private:
        int arr[n];
        int top;
    public:
        class Range{
        };
        Stack(){
            top = -1;
        }
        void push(int element){
            if(top >= n-1){
                throw Range();
            }
            top++;
            arr[top] = element;
        }
        int pop(){
            if(top < 0){
                throw Range();
            }
            return arr[top--];
        }
};
int main(){
    Stack st;
    try{
        st.push(1);
        st.push(2);
        st.push(3);
        cout<<st.pop();
    }
    catch(Stack::Range){
        cout <<"This stack is full or empty"<< endl;
    }
    return 0;
}