#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack{
    public:
    T *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr= new T[size];
        this->top=-1;
    }
    void push(T element){
        if(top<size-1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }
    T pop(){
        if(top>=0){
            T temp=arr[top];
            top--;
            return temp;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    
};
int main(){
    Stack<int> st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.pop();
    cout<<endl;

    Stack<float> s(5);
    s.push(3.12);
    s.push(7.6);
    s.push(8.3);
    cout<<endl;
    cout<<s.pop();
    cout<<endl;

    Stack<char> st1(5);
    st1.push('a');
    st1.push('b');
    st1.push('c');
    cout<<endl;
    cout<<st1.pop();
    cout<<endl;
}