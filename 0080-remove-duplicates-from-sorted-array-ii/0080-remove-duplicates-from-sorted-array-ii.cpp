class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0; // index
        for(auto x:nums){ // traversing to all elements
            if(i==0 || i==1|| nums[i-2]!=x){ // 0th index and 1st index should always be inlucded
                nums[i] = x;
                i++;
            }

        }
        return i;
    }
};