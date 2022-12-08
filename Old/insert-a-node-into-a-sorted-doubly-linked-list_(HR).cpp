#include <bits/stdc++.h>
using namespace std;

struct DoublyLinkedListNode
{
    int data;
    DoublyLinkedListNode *next;
    DoublyLinkedListNode *prev;
};

DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *llist, int data)
{
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    
    if (llist == NULL)
    {
        return newNode;
    }
    
    DoublyLinkedListNode *temp = llist;
    while (temp->next != NULL)
    {
        if (temp->data <= data)
        {
            temp = temp->next;
        }
        else
        {
            break;
        }
    }
    
    if (temp->data > data)
    {
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }
    else
    {
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev = newNode;
        if (newNode->prev != NULL)
        {
            newNode->prev->next = newNode;
        }
    }
    
    return llist;
}
