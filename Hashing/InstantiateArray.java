import java.util.Arrays;
public class InstantiateArray {
    public static void main(String[] args) {
        int Array[];
        Array = new int[3];

        Array[0] = 1;
        Array[1] = 2;
        Array[2] = 3;

        System.out.println(Arrays.toString(Array));


        String sArray[] = {"a", "b", "c"};
        System.out.print(Arrays.toString(sArray));

    }
}
