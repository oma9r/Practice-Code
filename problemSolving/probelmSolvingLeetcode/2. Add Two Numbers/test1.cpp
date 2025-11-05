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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *cl1 = l1;
        ListNode *cl2 = l2;

        ListNode *min = NULL;
        ListNode *max = NULL;

        bool flag = false;

        int carry = 0;

        while(cl1 != NULL && cl2 != NULL){
            cl2->val = cl2->val + cl1->val;
            if(cl2->val > 9){
                
                carry = cl2->val / 10;
                cl2->val = cl2->val % 10;
                                                                    //if(carry > 0){
                if(cl2->next != NULL){

                    cl2->next->val = carry;
                    carry = 0;
                }
                                                                    //}

            }
            if(cl1->next == NULL){

                if(cl2->next != NULL){

                    min = cl1;
                    min->next = new ListNode;
                    min->val = 0;
                    min->next->next = NULL;
                    min = min->next;
                    max = cl2;
                    max = max->next;
                    flag = true;
                    break;

                }
            }

            else if(cl2->next == NULL){

                 if(cl1->next != NULL){

                    min = cl2;
                    min->next = new ListNode;
                    min->val = 0;
                    min->next->next = NULL;
                    min = min->next;
                    max = cl1;
                    max = max->next;
                    flag = true;
                    break;

                }
            }
            cl2 = cl2->next;
            cl1 = cl1->next;
        }


        if(flag){
        ///if(min == NULL){

            //min= new ListNode;
            //min->val = 0;
            //min->next->next = NULL;
    
            while(max != NULL){

                min->val = max->val + carry;
                if(min->val > 9){

                    carry = min->val / 10;
                    min->val += min->val % 10;

                    if(carry > 0){

                        min->next = new ListNode;
                        min->val = carry;
                    }
                }

                min = min->next;
                max = max->next;

            }
        //}
         return max;
    }

    return cl2;
       
    }

    
};