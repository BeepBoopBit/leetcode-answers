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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tempHead = head;
        if(tempHead == nullptr) return head;
        while(tempHead->next != nullptr){
            ListNode *nextNode = tempHead->next;
            if(tempHead->val == nextNode->val){
                tempHead->next = nextNode->next;
                delete nextNode;
            }else{
                tempHead = tempHead->next;
            }
        }
        return head;
    }
};

int main(){
    Solution sol;

    ListNode *myHead = new ListNode(0);
    ListNode *tempHead = myHead;

    int arr[] = {0,1,2,2,2,3,4,5,1};
    for(int i = 0; i < 9; ++i){
        tempHead->next = new ListNode(arr[i]);
        tempHead = tempHead->next;
    }
    ListNode *newHead = sol.deleteDuplicates(myHead);
    while(newHead != nullptr){
        cout << newHead->val << " ";
        newHead = newHead->next;
    }

    return 0;
}