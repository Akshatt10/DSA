class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int far = 0;

        for(int i =0; i<n; i++){
            if(i>far){
                return false;
            }
            int element = i + nums[i];
            far = max(far, element);
            if(far >= n-1){
                return true;
                
            }
        }
        return false;
    }
};