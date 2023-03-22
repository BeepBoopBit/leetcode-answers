#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode (int x, ListNode *next) : val(x) , next(next){}
};

ListNode * mergeTwoLists(ListNode *list1, ListNode * list2){
    ListNode *returnList = new ListNode(101);
    ListNode *tempList = returnList;
    while(list1 != nullptr || list2 != nullptr){

        // save the values
        int value01 = 101;
        if(list1 != nullptr){
            value01 = list1->val;
        }
        int value02 = 101;
        if(list2 != nullptr){
            value02 = list2->val;
        }

        if(value01 < value02){
            tempList->next = new ListNode (value01);
            list1 = list1->next;
        }else{
            tempList->next = new ListNode (value02);
            list2 = list2->next;
        }
        tempList = tempList->next;
    }
    return returnList->next;
}


int main(){
    ListNode *node01 = nullptr;

    ListNode *node02 = nullptr;

    ListNode *tempNode = mergeTwoLists(node01, node02);
    while(tempNode != nullptr){
        std::cout << tempNode->val << ' ';
        tempNode = tempNode->next;
    }


    return 0;
}

