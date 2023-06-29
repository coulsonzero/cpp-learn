#include <iostream>
#include <stack>
using namespace std;


// stack: 先进后出
// size()
// empty()
// push()
// pop()
// top()

void print_stack(stack<int> stack1);

int main() {
    stack <int> stack1;
//    stack <int> stack2 = {1, 2, 3};

    stack1.push(1);
    stack1.push(3);
    stack1.push(5);
    stack1.push(9);

    cout << "size: " << stack1.size() << endl;      // 4
    cout << boolalpha;
    cout << "empty: " << stack1.empty() << endl;     // false

    int& i = stack1.top();
    cout << "top: " << i << endl;

    stack1.pop();
    cout << "top(after pop): " << stack1.top() << endl;


    print_stack(stack1);

    return 0;
}

void print_stack(stack<int> stack) {
    cout << "stack: [ ";
    while(!stack.empty()) {
        auto sign = stack.size() > 1 ? ", " : " ";
        cout << stack.top() << sign;
        stack.pop();
    }
    cout << "]" << endl;
}

