#include <bits/stdc++.h>
using namespace std;

struct DoublyLinkedListNode
{
    int data;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode *prev;
};

DoublyLinkedListNode *reverse(DoublyLinkedListNode *llist)
{
    if (llist == nullptr || llist->next == nullptr)
        return llist;

    DoublyLinkedListNode *cur = llist;
    DoublyLinkedListNode *tmp;

    while (cur->next)
    {
        tmp = cur->next;
        swap(cur->next, cur->prev);
        cur = tmp;
    }
    swap(cur->next, cur->prev);

    return cur;
}