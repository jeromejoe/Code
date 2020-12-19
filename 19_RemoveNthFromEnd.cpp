/*
19. Remove n-th node from end of a linked list  
*/

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

ListNode* removeNthFromEnd(ListNode* head, int n);

int main()
{

  return 0;
}

// two pass
ListNode* removeNthFromEnd(ListNode* head, int n)
{
  int length = 0;
  ListNode* cursor = head;
  ListNode* dummy = new ListNode(0);
  dummy->next = head;

  while(cursor)
  {
    length++;
    cursor = cursor->next;
  }

  length -= n;
  cursor = dummy;
  while(length > 0)
  {
    cursor = cursor->next;
    length--;
  }
  cursor->next = cursor->next->next;

  return dummy->next;
}
