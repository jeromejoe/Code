/*
2. Add two numbers
*/

#include <cstdlib>
#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x)
  : val(x)
  , next(NULL)
  {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

int main()
{
  ListNode nn1(8);
  ListNode nn2(5);
  ListNode nn3(6);
  nn1.next = &nn2;
  nn2.next = &nn3;
  // cout << nn2.next->val << endl;
  ListNode mm1(7);
  ListNode mm2(2);
  ListNode mm3(4);
  mm1.next = &mm2;
  mm2.next = &mm3;

  ListNode* n1 = &nn1;
  ListNode* m1 = &mm1;
  ListNode* testPtr = addTwoNumbers(n1, m1);
  // cout << testPtr->next->next->next->next->next->val << endl;


  return 0;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
  ListNode* rootPtr = new ListNode(0);
  ListNode* cursor = rootPtr;
  int carry = 0;
  while(l1 != NULL || l2 != NULL || carry != 0)
  {
    int l1Val = l1 != NULL ? l1->val : 0;
    int l2Val = l2 != NULL ? l2->val : 0;
    int sum = l1Val + l2Val + carry;
    int sumVal = sum % 10;
    carry = sum / 10;

    cursor->next = new ListNode(sumVal);
    cursor = cursor->next;

    if(l1 != NULL)
    {
      l1 = l1->next;
    }
    if(l2 != NULL)
    {
      l2 = l2->next;
    }
  }

  return rootPtr->next;
}