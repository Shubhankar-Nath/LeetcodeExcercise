public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if(nums.Length==0){
            return 0;
        }
        int current_index=0, seeking_index=0;
        while(seeking_index<(nums.Length-1)){
            seeking_index++;
            if(nums[current_index]<nums[seeking_index]){
                current_index++;
                nums[current_index]=nums[seeking_index];
            }
        }
        return (current_index+1);
    }
}