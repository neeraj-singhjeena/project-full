#include <iostream>
#include <stack>
using namespace std;
class Stack
{
private:
    int top;

public:
    void empty()
    {

        cout << "stack is empty";
    }
};

int main()
{
    Stack s;
    // // s.push(10);
    // s.push(20);
    // cout << s.top();
    s.empty();

    return 0;
}