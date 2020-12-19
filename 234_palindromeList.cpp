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


bool isPalindrome(ListNode* head) 
{
  if(!head || !head->next)
  {
    return true;
  }
  ListNode* fast = head;
  ListNode* slow = head;

  //find mid point
  while(fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }

  //reverse
  ListNode* cur = slow; //slow belongs to the second list
  ListNode* prev = NULL;
  ListNode* next = NULL;
  while(cur)
  {
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  }

  //compare
  while(prev && head)
  {
    if(prev->val != head->val)
    {
      return false;
    }
    prev = prev->next;
    head = head->next;
  }
  return true;
}