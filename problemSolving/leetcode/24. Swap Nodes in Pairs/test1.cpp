#include <iostream>
using namespace std;

  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode *slow = head;
        ListNode *fast = head->next;
        ListNode *oHead = fast;
        ListNode *prev = head;

            slow->next = fast->next;
            fast->next = slow;

        while(slow != NULL){
            slow->next = fast->next;
            fast->next = slow;
            prev->next = fast;
            prev = slow;
            slow = slow->next;
            if(slow == NULL) break;
            fast = slow->next;
        }
        return oHead;    
    }
};













int main()
{
        


        


        return 0;
}
