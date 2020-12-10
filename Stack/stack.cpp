#include "stack.h"

void CreateStack(Stack &s){
    s.top = -1;
}

void push(Stack &s, infotype x){
    if (s.top == -1){
        s.top = 0;
        s.info[0] = x;
    } else {
        s.top = s.top + 1;
        s.info[s.top] = x;
    }
}
infotype pop (Stack &s){
    infotype x;
    if (s.top == 0){
        x = s.info[0];
        s.top = -1;
        return x;
    } else {
        if (s.top != -1){
            x = s.info[s.top];
            s.top = s.top - 1;
            return x;
        }
    }
}

void printinfo(Stack &s){
    if (s.top != -1){
        cout << "[TOP] ";
        int i;
        for (i=s.top;i>=0;i--){
            cout << s.info[i] << " ";
        }
    } else {
        cout << "stack kosong" << endl;
    }
}
void balikStack(Stack &s){
    Stack s1;
    s1 = s;
    CreateStack(s);
    int x;
    while(s1.top != -1){
        x = pop(s1);
        push(s, x);
    }
}

void pushAscending(Stack &s, int x){

    if(s.top == -1){
        s.top = 0;
        s.info[s.top] = x;
    } else if(s.top == 0){
        s.top = s.top + 1;
        if(s.info[s.top-1] > x)
        {
            int temp = s.info[s.top-1];
            s.info[s.top-1] = x;
            s.info[s.top] = temp;
        }
        else if(s.info[s.top-1] < x)
        {
            s.info[s.top] = x;
        }
    } else
    {
        s.top = s.top + 1;
        s.info[s.top] = x;

        for(int i = 0; i < s.top - 1; i++)
        {
            int min_idx = s.info[i];
            int loc = i;
            for(int j = i + 1; j < s.top; j++)
            {
                if(min_idx > s.info[j])
                {
                    min_idx = s.info[j];
                    loc = j;
                }
            }
            int tmp = s.info[i];
            s.info[i] = s.info[loc];
            s.info[loc] = tmp;
        }
    }
}
