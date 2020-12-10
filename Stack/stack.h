#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

typedef int infotype;

struct Stack {
    int info[20];
    int top;
};

void CreateStack(Stack &s);
void push(Stack &s, infotype x);
infotype pop (Stack &s);
void printinfo(Stack &s);
void balikStack(Stack &s);
void pushAscending(Stack &s, int x);

#endif // STACK_H_INCLUDED
