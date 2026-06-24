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
    ListNode* middleNode(ListNode* head) {
        ///count the size;
        int count=0;
        ListNode* temp=head;

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        //find middle 
        int middle=count/2;

        temp=head;
        while(middle--){
            temp=temp->next;
        }
        return temp;
    }
};