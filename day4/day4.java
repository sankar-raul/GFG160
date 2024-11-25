import java.util.Arrays;

public class day4 {
    public static void main(String args[]) {
        int arr[] = {1,2,3,4,5};
        Solution Answer = new Solution();
        Answer.rotateArr(arr, 2);
        System.out.println(Arrays.toString(arr));
    }
    private static class Solution {
        // Function to rotate an array by d elements in counter-clockwise direction. 
        void rotateArr(int arr[], int d) {
            int n = arr.length;
            d %= n;
            reverse(arr, 0, d - 1);
            reverse(arr, d, n - 1);
            reverse(arr, 0, n - 1);
        }
        static void reverse(int arr[], int start, int end) {
            while (start < end) {
                int temp = arr[start];
                arr[start++] = arr[end];
                arr[end--] = temp;
            }
        }
    }
}
