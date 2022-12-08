#include <bits/stdc++.h>
using namespace std;
struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    vector<int> val;
    while (llist != NULL)
    {
        val.push_back(llist->data);
        llist = llist->next;
    }

    return val[val.size() - 1 - positionFromTail];
}