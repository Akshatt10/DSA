// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int missing = 0;
//         unordered_map<int,int> mp;
//         for(int i=0; i<n; i++){
//             mp[nums[i]]++;
//         }

//         for(int i=0; i<=n; i++){
//             if(mp[i] == 0)
//             missing = i;
//         }

//         return missing;
//     }
// };


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};
