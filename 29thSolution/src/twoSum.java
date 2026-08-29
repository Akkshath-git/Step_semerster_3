import java.util.Arrays;

class twoSum {
    public int[] TwoSum(int[] nums, int target) {

        int st = 0;
        int end = nums.length - 1;

        Arrays.sort(nums);

        while (st < end) {

            int sum = nums[st] + nums[end];

            if (sum == target) {
                return new int[]{st, end};
            }
            else if (sum < target) {
                st++;
            }
            else {
                end--;
            }
        }

        return new int[]{-1, -1};
    }
}