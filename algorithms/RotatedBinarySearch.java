public class RotatedBinarySearch {
    public static int findPivot(int[] arr) {
        if (arr.length < 2) {
            return -1;
        }
        for (int i = 1; i < arr.length; i++) {
            if (arr[i - 1] > arr[i]) {
                return i - 1;
            }
        }
        return -1;
    }

    public static int binarySearch(int[] arr, int key, int left, int right) {
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }

    public static int pivotedBinarySearch(int[] arr, int key) {
        int pivot = findPivot(arr);
        if (pivot == -1) {
            // array is not rotated
            return binarySearch(arr, key, 0, arr.length - 1);
        }
        if (arr[pivot] == key) {
            // the value is at pivot
            return pivot;
        } else if (arr[0] > key) {
            // the value is right to the pivot
            return binarySearch(arr, key, pivot + 1, arr.length - 1);
        }
        // else the value is on left side of pivot
        return binarySearch(arr, key, 0, pivot - 1);
    }

    public static void main(String[] args) {
        int[] arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
        int key = 3;
        int index = pivotedBinarySearch(arr, key);
        if(index == -1) {
            System.out.println("Element is not found in the array!");
        } else {
            System.out.println("Element is present at index: " + index);
        }
    }
}