class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        
        //two pointer 
        int l=0;
        int r=-1;
        int length=0;
        int zero = -1;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0) 
            {
                if(zero<0) // first occurence
                {
                    zero = i;
                }
                else{
                    length = max(length, (r-l+1));
                    l = zero+1;
                    zero = i;
                }
            }
            else{
                
            }
            r++;
        }
        length = max(length, (r-l+1));
        return length-1;
    }
};