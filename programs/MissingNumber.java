import java.util.Arrays;

public class MissingNumber {

    public class Pair {
        public int missing;
        public int repeating;
    }


    public Pair missingAndRepeating(int[] nums) {
        Pair answer = new Pair();
        Arrays.sort(nums);

        for(int i=1; i<nums.length; i++) {
            if(nums[i-1] == nums[i]) {
                answer.repeating = nums[i];
            } else if(nums[i-1] != nums[i] + 2) {
                answer.missing = nums[i] - 1 ;
            }
        }


        return answer;


    }
    public static void main(String[] args) {
        int[] nums = {4, 3, 6, 2, 1, 1};

        MissingNumber mn = new MissingNumber();

        Pair answer = mn.missingAndRepeating(nums);

        System.out.println("Missing: " + answer.missing);
        System.out.println("Repeating: " + answer.repeating);
    }
}
