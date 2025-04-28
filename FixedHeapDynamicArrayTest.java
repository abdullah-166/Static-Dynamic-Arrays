public class FixedHeapDynamicArrayTest {
    public static void main(String[] args) {
        final int SIZE = 5;
        int[] arr = new int[SIZE];
        for (int i = 0; i < SIZE; i++) {
            arr[i] = i + 1;
        }
        System.out.print("Fixed Heap Dynamic Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}