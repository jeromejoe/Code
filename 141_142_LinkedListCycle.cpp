/*
141. determine if a linked list has a cycle in it.  
*/

#include <iostream>
#include <set>
using namespace std;

struct ListNode 
{
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head);
ListNode* detectCycle(ListNode *head);

int main()
{
  return 0;
}

//two pointers
bool hasCycle(ListNode *head)
{
  if(!head)
  {
    return false;
  }

  ListNode* slow = head;
  ListNode* fast = head->next;

  while(slow != fast)
  {
    if(fast == NULL || fast->next == NULL)
    {
    return false;
    }
    slow = slow->next;
    fast = fast->next->next;
  }
  return true;
}

//return cycle start node
//using set
ListNode* detectCycle(ListNode *head) 
{
  std::set<ListNode*> nodeSet;
  while(head)
  {
    if(nodeSet.find(head) != nodeSet.end())
    {
      return head;
    }
    nodeSet.insert(head);
    head = head->next;
  }
  return NULL;
}