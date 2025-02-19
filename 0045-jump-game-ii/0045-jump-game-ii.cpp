class Solution {
public:
    int jump(vector<int>& nums) {
      int n = nums.size();
        int far = 0;
        int count = 0;
        int current_max = 0; 
        for (int i = 0; i < n - 1; i++) { 
            far = max(far, i + nums[i]); 
                if (i == current_max) { 
                    count++; 
                current_max = far; 
            }
        }
        return count;
    }
};