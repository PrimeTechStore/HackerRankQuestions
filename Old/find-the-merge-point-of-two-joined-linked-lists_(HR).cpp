#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode
{
    int data;
    SinglyLinkedListNode *next;
};

int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    set<SinglyLinkedListNode*> visited;
    
    while ( head1 || head2)
    {
        if (head1 == head2) return head1->data;

        if (visited.find(head1) != visited.end())
            return head1->data;
        
        if (visited.find(head2) != visited.end())
            return head2->data;

        if (head1)
        {
            visited.insert(head1);
            head1 = head1->next;
        }
        
        if (head2)
        {
            visited.insert(head2);
            head2 = head2->next;
        }
    }
    return -1;
}