/**
Insersion Sorting

**/

void insersion_sorting(ListNode *head)
{
    ListNode dummy(-1);
    ListNode *prev=&dummy;
    while(head)
    {
       ListNode *prev=&dummy;
       ListNode *cur=dummy.next;
       while(cur)
       {
           if(cur->val>head->val)
               break;
           prev=cur;
           cur=cur->next;
       }
       ListNode* tmp=head->next;
       prev->next=head;
       head->next=cur;
       head=tmp;
    }
    return dummy.next;
}


