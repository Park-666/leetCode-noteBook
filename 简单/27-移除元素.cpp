/*交换移除法*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        for (i = 0; i < n; ) {
            if (nums.at(i) == val) {
                nums.at(i) = nums.at(n-1);
                n--;
            }
            else
                i++;
        }
        return n;
    }
};
