/*暴力法，逐个比较A链表和B链表各个节点地址是否相等*/
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


/*哈希表法，利用c++的stl::unordered_set。先对A链表构建哈希表，再遍历B链表*/
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
        /*对A链表构建哈希表*/
        std::unordered_set<ListNode*> set;
        while (headA) {
            set.insert(headA);
            headA = headA->next;
        }
        /*遍历B链表，查找地址相同节点*/
        while (headB) {
            if (set.find(headB) != set.end()) {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};
