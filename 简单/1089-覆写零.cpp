/*自己代码，垃圾算法*/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len = arr.size();
        for (int i=0; i<len; i++) {
            if (arr[i] == 0) {
                for (int j=len-1; j>i; j--) {
                    arr[j] = arr[j-1];
                }
                i++;
            }
        }
    }
};
