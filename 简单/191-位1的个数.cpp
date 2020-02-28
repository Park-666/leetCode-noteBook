/*遍历uint32_t n的32位*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        uint32_t mask = 1;
        for (int i = 0; i <32; i++){
            if ((n & mask) != 0){
                count++;
            }  
            mask<<=1;
        }
        return count;
    }
};

/*直接计算1的个数，利用 n*(n -1)*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0) {
            count++;
            n &= (n - 1);
        }
        return count;
    }
};

/*SWAR算法计算汉明重量*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
        n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
        n = (n & 0x0F0F0F0F) + ((n >> 4) & 0x0F0F0F0F);
        n = (n * (0x01010101) >> 24);
        return n;  
    }
};
