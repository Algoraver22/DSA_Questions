class Solution {
    public void rotate(int[] nums, int k) {
        int arr[]=new int[nums.length];
        int mod=0;
        for(int i=0;i<nums.length;i++)
        {
            mod=(i+k)%nums.length;
            arr[mod]=nums[i];
        }
          for(int i=0;i<nums.length;i++)
          {
            nums[i]=arr[i];
          }
    }
}