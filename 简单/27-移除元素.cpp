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

/*方法2，双指针法，覆盖法*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++) {
            if (nums.at(i) != val) {
                nums.at(j) = nums.at(i);
                j++;
            } 
        }
        return j;
    }
};
