#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
    ListNode* temp = NULL;
    ListNode* head = NULL;
    if(temp1 == NULL) return temp2;
    else if(temp2 == NULL) return temp1;
    if(temp1->val < temp2->val) {
        temp = temp1;
        temp1 = temp1->next;
    } else {
        temp = temp2;
        temp2 = temp2->next;
    }
    head = temp;
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->val < temp2->val) {
            temp->next = temp1;
            temp1 = temp1->next;
        } else {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    while(temp1 != NULL) {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
    }
    while(temp2 != NULL) {
        temp->next = temp2;
        temp2 = temp2->next;
        temp = temp->next;
    }
    return head;
}

int main(int argc, char const *argv[])
{
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode* head = mergeTwoLists(head1, head2);

    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}
    