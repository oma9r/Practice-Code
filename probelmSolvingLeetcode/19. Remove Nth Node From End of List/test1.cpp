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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int size = 0;
        ListNode *currentL = head;
        while(currentL != NULL)
        {
            ++size;
            currentL = currentL->next;
        }
        ListNode* current = head->next;
        ListNode *q = head;
        if(size == 1)
        {
            head = NULL;
            return head;
        }
        int kth = size - n;

        int count = 1;

        while(current != NULL)
        {
            if(kth - count == 0)
            {
                q->next = current->next;
                delete current;
                break;
            }
            current = current->next;
            q = q->next;
            ++count;

        }

        return head;
        
    }
};