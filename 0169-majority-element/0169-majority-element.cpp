// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         int n = nums.size();
//         for( auto i : nums){
//             mp[i]++;
//             if(mp[i] > n/2)   return i;
//         }
//         return -1;
        
//     }
// };

// BOYER MOORE APPROACH 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int candidate = 0, count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate; // Guaranteed to be correct as per problem constraints
    }
};