#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[10]; // array of size 10
int i = -1;  //  variable for top element in stack
void push(int n)
{
    a[++i] = n;
    
}

void Pop()
{
    i--;
}

int top()
{
    return a[i];
}

int main()
{
    push(2);
    push(4);
    push(6);
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
}
