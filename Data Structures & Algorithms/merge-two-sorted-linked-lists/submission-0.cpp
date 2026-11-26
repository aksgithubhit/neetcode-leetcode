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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newnode=new ListNode(-1);
        ListNode* newptr=newnode;
          ListNode* i=list1;
         ListNode* j=list2;
         while(i!=NULL && j!=NULL){
            if(i->val<=j->val){
                newptr->next=i;
                newptr=i;
                i=i->next;
            }
            else{
                newptr->next=j;
                newptr=j;
                j=j->next;
            }
         }
         while(i!=NULL){
            newptr->next=i;
            newptr=i;
            i=i->next;
         }
while(j!=NULL){
            newptr->next=j;
        newptr=j;
            j=j->next;
         }
    return newnode->next;
    }
};
