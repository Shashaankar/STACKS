#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

class xstack   
{  
    public:
    void Push(int x)
    {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;
        top = temp;
    }
    
    void Pop()
    {
        struct Node* temp;
        if(top==NULL)
            return;
         
        temp = top;
        top  = top->next;
        delete temp;
    }
    
    int Top()
    {
        return top->data;
    }
};


int main()
{
    xstack S;
   S.Push(56);
   S.Push(34);
   S.Push(45);
   //S.Pop();
   cout << S.Top() << endl;
   return 0;
}

