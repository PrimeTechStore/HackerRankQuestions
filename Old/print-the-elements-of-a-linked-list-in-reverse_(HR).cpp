#include <bits/stdc++.h>
using namespace std;
struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

void reversePrint(SinglyLinkedListNode *llist)
{
    int ar[] = {};
    int i = 0;
    while (llist)
    {
        ar[i++] = llist->data;
        llist = llist->next;
    }
    for ( i = i-1; i >= 0; i--)
    {
        cout << ar[i] << endl;
    }
}

