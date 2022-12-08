#include <bits/stdc++.h>
using namespace std;
struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *curr = llist;
    SinglyLinkedListNode *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}