/*
2. Add two numbers
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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

int main()
{
  ListNode nn1(1);
  ListNode nn2(2);
  ListNode nn3(3);
  nn1.next = &nn2;
  nn2.next = &nn3;
  // cout << nn2.next->val << endl;
  ListNode mm1(1);
  ListNode mm2(3);
  ListNode mm3(5);
  mm1.next = &mm2;
  mm2.next = &mm3;

  ListNode* n1 = &nn1;
  ListNode* m1 = &mm1;

  ListNode* test = mergeTwoLists(n1, m1);
  while(test != NULL)
  {
    cout << test->val << endl;
    test = test->next;
  }

  return 0;
}

//recursive
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
  if(l1 == NULL)
  {
    return l2;
  }

  if(l2 == NULL)
  {
    return l1;
  }

  if(l1->val <= l2->val)
  {
    l1->next = mergeTwoLists(l1->next, l2);
    return l1;
  }

  l2->next = mergeTwoLists(l1, l2->next);
  return l2;
}


/*
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
  ListNode* root = new ListNode;
  ListNode* cursor = root;

  while(l1 != NULL || l2 != NULL)
  {
    if(l1 != NULL && l2 != NULL)
    {
      if(l1->val <= l2->val)
      {
        cursor->next = new ListNode(l1->val);
        cursor = cursor->next;
        l1 = l1->next;
      }
      else if(l1->val > l2->val)
      {
        cursor->next = new ListNode(l2->val);
        cursor = cursor->next;
        l2 = l2->next;
      }
    }
    else if(l1 != NULL && l2 == NULL)
    {
      cursor->next = new ListNode(l1->val);
      cursor = cursor->next;
      l1 = l1->next;
    }
    else if(l1 == NULL && l2 != NULL)
    {
      cursor->next = new ListNode(l2->val);
      cursor = cursor->next;
      l2 = l2->next;
    }
  }

  return root->next;
}
*/