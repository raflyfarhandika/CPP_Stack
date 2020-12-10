#include "stack.h"

int main()
{
    cout << "Hello World" << endl;

    int x;
    Stack s, s1;
    CreateStack(s);

    push(s, 3);
    push(s, 4);
    push(s, 8);
    x = pop(s);
    push(s, 2);
    push(s, 3);
    x = pop(s);
    push(s, 9);
    printinfo(s);
    cout << endl;
    cout << "balik stack" << endl;
    balikStack(s);
    printinfo(s);

    cout << endl << endl;
    cout << "Hello World" << endl;

    CreateStack(s1);

    pushAscending(s1, 3);
    pushAscending(s1, 4);
    pushAscending(s1, 8);
    pushAscending(s1, 2);
    pushAscending(s1, 3);
    pushAscending(s1, 9);
    printinfo(s1);
    cout << endl;
    cout << "balik stack" << endl;
    balikStack(s1);
    printinfo(s1);
    return 0;
}
