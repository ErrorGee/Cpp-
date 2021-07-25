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
    ListNode* partition(ListNode* head, int x) {
        ListNode* Before= new ListNode();
        ListNode* BHead= Before;
        ListNode* After=new ListNode();
        ListNode* AHead= After;
        ListNode* Curr=head;
        if (!head){
            return head;
        }
        while (Curr!=NULL){
            if (Curr->val<x){
                Before->next=Curr;
                Before=Before->next;
            }
            else{
                After->next=Curr;
                After=After->next;
            }
            Curr=Curr->next;
        }
        After->next=NULL;
        Before->next=AHead->next;
        return BHead->next;
        
    }
};
