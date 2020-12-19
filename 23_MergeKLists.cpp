/*
21. Merge k lists  
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct ListNode 
{
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

struct cmp
{
  bool operator()(ListNode* a, ListNode* b)
  {
    return a->val > b->val;
  }
};

ListNode* mergeKLists(vector<ListNode*>& lists);

int main()
{
  ListNode* n1 = new ListNode(1);
  ListNode* n2 = new ListNode(2);
  ListNode* n3 = new ListNode(3);

  vector<ListNode*> v;
  v.push_back(n3);
  v.push_back(n2);
  v.push_back(n1);

  ListNode* test = mergeKLists(v);
  
  cout<< test->val << endl;
  cout<< test->next->val << endl;
  cout<< test->next->next->val << endl;

  return 0;
}

ListNode* mergeKLists(vector<ListNode*>& lists)
{
  priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
  for(auto& l : lists)
  {
    if(l)
    {
      pq.push(l);
    }
  }

  ListNode head(-1);
  ListNode* ptr = &head;

  while(!pq.empty())
  {
    ptr->next = pq.top();
    pq.pop();
    ptr = ptr->next;
    if(ptr->next)
    {
       pq.push(ptr->next); 
    }
  }

  return head.next;
}






