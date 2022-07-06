public class NextPermutations {
    // https://leetcode.com/problems/next-permutation/

    public static void reverseArr(int[] arr, int left, int right) {
        while(left<right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    public static int findNearestGreater(int[] arr, int start, int key) {
        for(int i=arr.length-1; i>start; i--) {
            if(arr[i] > key) {
                return i;
            }
        }
        return start;
    }

    public static void findNextPerm(int[] arr) {
        boolean desc = true;
        for(int i=0; i<arr.length-1; i++) {
            if(arr[i] > arr[i+1]) {
                desc = false;
                break;
            }
        }
        if(desc) {
            reverseArr(arr, 0, arr.length-1);
        } else {
            for(int i=arr.length - 1; i>0; i--) {
                if(arr[i] > arr[i-1]) {
                    int index = findNearestGreater(arr, i-1, arr[i-1]);
                    int temp = arr[index];
                    arr[index] = arr[i-1];
                    arr[i-1] = temp;
                    reverseArr(arr, i+1, arr.length-1);
                    break;
                }
            }
        }
        
        for(int i=0; i<arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void main(String[] args) {
        int[] arr = {1,2,3};
        findNextPerm(arr);
    }
}
