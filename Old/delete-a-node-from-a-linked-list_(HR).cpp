#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
    if (llist == nullptr)
        return nullptr;
    if (position == 0)
        return llist->next;
    SinglyLinkedListNode *cur = llist;
    for (int i = 0; i < position - 1; i++)
    {
        cur = cur->next;
        if (cur == nullptr)
            return llist;
    }
    cur->next = cur->next->next;
    return llist;
}