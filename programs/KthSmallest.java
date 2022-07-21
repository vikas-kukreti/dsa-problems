import java.util.Comparator;
import java.util.Iterator;
import java.util.PriorityQueue;

public class KthSmallest {
    
    public static int kthSmallest(int[] arr, int k) {
        Comparator<Integer> cmp = new Comparator<>(){
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2-o1;
            }
        };

        PriorityQueue<Integer> pq = new PriorityQueue<>(cmp);
        
        for(int i=0; i<k; i++) {
            pq.add(arr[i]);
        }
    
        for(int i=k; i<arr.length; i++) {
            if(pq.peek() > arr[i]) {
                pq.poll();
                pq.add(arr[i]);
            }
        }

        return pq.peek();
    }
    public static void main(String[] args) {
        int arr[] = {7,10,4,3,20,15};

        Comparator<Integer> cmp = new Comparator<>(){
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2-o1;
            }
        };
        PriorityQueue<Integer> pq = new PriorityQueue<>(cmp);
        
        for(int i=0; i<arr.length; i++) {
            pq.add(arr[i]);
        }
        while(pq.size() > 0) {
            System.out.println(pq.poll());
        }
        // System.out.println(kthSmallest(arr, 3));
    }
}