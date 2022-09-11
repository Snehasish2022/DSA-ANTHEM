#include <iostream>
using namespace std;
#define n 3
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack is full" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty to pop" << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isempty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top();
    st.pop();
    st.pop();
    st.pop();
    st.Top();

    cout<<st.isempty();
    return 0;
}

