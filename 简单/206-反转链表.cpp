/*迭代法，从头向尾改变指向*/
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
    ListNode* reverseList(ListNode* head) {
        ListNode *cur = head;
        ListNode *pre = NULL;
        while (cur) {
            /*临时节点用来保存下一个节点*/
            ListNode *tem = cur->next;
            /*改变指向，指向反方向*/
            cur->next = pre;
            /*移动pre指针*/
            pre = cur;
            /*移动cur指针*/
            cur = tem;
        }
        return pre;
    }
};
