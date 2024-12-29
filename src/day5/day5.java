import java.util.Arrays;
public class day5 {
    public static void main(String[] args) {
        int[] arr = {2, 4, 1, 7, 5, 0};
        GFG Solution = new GFG();
        System.out.println(Arrays.toString(arr));
        Solution.nextPermutation(arr);
        System.out.println(Arrays.toString(arr));
    }
    private static class GFG {
        void nextPermutation(int[] arr) {
            int pivot = -1, i = 0;
            int n = arr.length;
            for (i = n - 2; i >= 0; i--) {
                if (arr[i] < arr[i+1]) {
                    pivot = i;
                    break;
                }
            }
            if (pivot == -1) {
                reverse(arr, 0, n - 1);
                return;
            }
            for (i = n - 1; i > pivot; i--) {
                if (arr[i] > arr[pivot]) {
                    int temp = arr[i];
                    arr[i] = arr[pivot];
                    arr[pivot] = temp;
                    break;
                }
            }
            reverse(arr, pivot + 1, n - 1);
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