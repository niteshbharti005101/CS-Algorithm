#include <iostream>
using namespace std;

struct Node
{
    int n;
    struct Node *next;
};

struct Node *list, *last, *temp;

int main()
{
    list = last = NULL;
    for(int i=0; i<10; i++)
    {
        int num;
        cin>>num;
        temp = new Node;
        temp->n = num;
        temp->next =NULL;
        if(list == NULL)
        {
            list = temp;
            last = temp;
        }
        else
        {
            last->next = temp;
            last = temp;
        } 
    }
    temp = list;
    while(temp != NULL)
    {
        cout<<"  "<<temp->n;
        temp = temp->next;
    }
}