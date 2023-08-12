class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxval=INT_MIN;
        // o(n3)
       for(int i=0;i<nums.size();i++){
           for(int j=i;j<nums.size();j++){
               int cursum=0;
               for(int k=i;k<=j;k++){
                   cursum+=nums[k];
               }
               maxval=max(maxval,cursum);
           }
       }
       return maxval;

// o(n2)
        for(int i=0;i<nums.size();i++){
            int cursum=0;
            int chek=false;
            for(int j=i;j<nums.size();j++){
                cursum+=nums[j];
                 if(cursum>maxval)
                maxval=cursum;
                 if(cursum<0)
                break;
            if(j==nums.size()-1)
            check=true;
            }
            if(check)
            break;
        }
        return maxval;


        
    
    }
};