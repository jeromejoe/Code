
#include <iostream>
using namespace std;

struct ListNode 
{
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode* ptr1 = headA;
    ListNode* ptr2 = headB;
    if(!headA || !headB)
    {
        return NULL;
    }

    while(ptr1->next || ptr2->next)
    {
        if(ptr1 == ptr2)
        {
            return ptr1;
        }

        if(ptr1->next == NULL)
        {
            ptr1 = headB;
            ptr2 = ptr2->next;
        }
        else if(ptr2->next == NULL)
        {
            ptr2 = headA;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

    }
    if(ptr1 == ptr2)
    {
        return ptr1;
    }
    return NULL;
}