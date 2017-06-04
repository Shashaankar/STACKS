#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node* next;
}node_t;

struct Node* top = NULL;

class xstack   
{  
    public:
/* @Desc: Push an intem into stack
 *
 * @Input: integer x
 */
    void Push(int x)
    {
        /* As stack grows new nodes next will be 
         * pointing to the previous top */
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }
   
/* @Desc: Pop an item from top of the stack
 *
 * @Input: NA
 * @Output: node value
 */ 
    int Pop()
    {
        struct Node* temp;
        int val;

        if(top==NULL)
            return INT_MIN;
         
        temp = top;
        top  = top->next;
        val  = temp->data;
        delete temp;

        return val;
    }
    
/* @Desc: Get the top item from stakc without deleting
 *
 * @Output: top node value
 */ 
    int Top()
    {
        if (top) {
            return top->data;
        } else {
            return INT_MIN;            
        }
    }
};


int main()
{
    xstack S;
   S.Push(56);
   S.Push(34);
   S.Push(45);
   cout << S.Pop() << endl;
   cout << S.Top() << endl;
   return 0;
}

