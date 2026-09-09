/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp=head;
    int decimal=0;
    while (temp!=NULL) {
        decimal*=2;
        decimal+=temp->val;
        temp=temp->next;
    }
    return decimal;
}