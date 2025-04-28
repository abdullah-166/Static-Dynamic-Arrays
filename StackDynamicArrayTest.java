import java.util.Scanner;
public class StackDynamicArrayTest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter size for array: ");
        int size = scanner.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
        System.out.print("Array with runtime size: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}