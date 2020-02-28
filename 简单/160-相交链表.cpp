/*暴力法，逐个比较节点地址是否相等*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *cruA = headA;
        while (cruA) {
            /*每次B链表从头开始遍历*/
            ListNode *cruB = headB;
            while (cruB) {
                if (cruA == cruB) {
                    return cruA;
                }
                cruB = cruB->next;
            }
            cruA = cruA->next;
        }
        return NULL;
    }
};
