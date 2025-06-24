/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode dummy;
        ListNode* tail = &dummy;     
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                //add list1's element to answer
                tail->next = list1;
                list1 = list1->next;
                tail = tail->next;
                //tail ke next address pe add list 1 ka first el
                //increase list1 address and tail address
            }
            else 
            {
                tail->next = list2;
                list2 = list2->next;
                tail = tail->next;
            }
        }
        if (list1 != nullptr) 
        {
            tail->next = list1;  
        }
        else
        {
            tail->next = list2;
        }
        return dummy.next;
    }
};