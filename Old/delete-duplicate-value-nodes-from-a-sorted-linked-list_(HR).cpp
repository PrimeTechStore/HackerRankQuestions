#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

SinglyLinkedListNode *removeDuplicates(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *temp;
    temp = llist;

    while (temp->next != NULL)
    {
        if (temp->next->data == temp->data)
        {
            SinglyLinkedListNode *delval;
            delval = temp->next;
            temp->next = delval->next;
            delete delval;
        }
        else
            temp = temp->next;
    }

    return llist;
}