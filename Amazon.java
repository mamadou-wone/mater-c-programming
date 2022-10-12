import java.util.ArrayList;
import java.util.List;

public class Amazon{
    
    public static void main(String[] args) {
        int array[] = {2, 4, 6, 4, 4, 6, 2};
        sortArray(array);
        List<Integer> occ = getAllPossibleWeight(array);
        for (int i : occ) {
            System.out.println(i);
        }
    }


    public static List<Integer> getAllPossibleWeight(int[] array){
        List<Integer> weightList = new ArrayList<>();

        for (Integer elem : array) {
            if (!weightList.contains(elem)) {
                weightList.add(elem);
            }
        }
        List<Integer> occ = new ArrayList<>();
        for (Integer integer : weightList) {
            int count = 0;
            for (Integer integer2 : array) {
                if(integer == integer2){
                    count++;
                }
            occ.add(count);    
            count = 0;
            }
        }
        System.out.println(occ.size());
        return occ;
    }


    public static void sortArray(int[] unsortedPartion){
        int temp;
        for (int i = 0; i < unsortedPartion.length; i++) {
            for (int j = i + 1 ; j < unsortedPartion.length; j++) {
                if (unsortedPartion[i] > unsortedPartion[j]) {
                    temp = unsortedPartion[j];
                    unsortedPartion[j] = unsortedPartion[i];
                    unsortedPartion[i] = temp;
                }
            }
        }
    }

}