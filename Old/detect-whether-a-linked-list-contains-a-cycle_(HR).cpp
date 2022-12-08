#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

bool has_cycle(SinglyLinkedListNode *head)
{
    // Floyd’s Cycle-Finding Algorithm

    if (head == NULL)
        return 0;
    SinglyLinkedListNode *slow, *fast;
    slow = head;
    fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;

}