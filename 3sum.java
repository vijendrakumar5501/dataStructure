// leetcode 15
//  time complexity o(n2)


class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> ans=new HashSet<>();
        Arrays.sort(nums);

        for(int i=0;i<nums.length-2;i++){
            int l=i+1;
            int r=nums.length-1;

            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    ans.add(Arrays.asList(nums[i],nums[l],nums[r]));
                    l++;r--;
                }
                else if(sum>0)
                r--;
                else l++;
            }
        }
        return new ArrayList<>(ans);
    }
}