#include "MyStack.h"

int main()
{
    MyStack::Stack<int> a;

    a.push(7);
    a.push(17);
    a.push(2);
    a.push(5);
    a.show();
    cout << "--------------------\n";
    cout << a.top();
    cout << "\n--------------------\n";
    while (!a.isEmpty()) {
        cout << a.top() << " was deleted\n";
        a.pop();
        a.show();
    }
}