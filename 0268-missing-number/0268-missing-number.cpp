class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int Esum = n*(n+1)/2;

        int actualSum = 0;
        for(int num:nums){
            actualSum += num;
        }

        return Esum- actualSum;
        
    }
};