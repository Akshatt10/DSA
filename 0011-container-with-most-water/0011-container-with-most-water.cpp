class Solution {
public:
    int maxArea(vector<int>& height) {
        int n  = height.size();
        int s = 0;
        int e = n-1;

        int maxx = 0;
        int current = 0;
        if(n==1) return 1;

        while(s<e){
            current = (e-s)*(min(height[s], height[e]));
            maxx = max(current, maxx);
            if(height[e] > height[s]) s++;
            else e--;
        }

        return maxx;

    }
};