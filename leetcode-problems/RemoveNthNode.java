
class RemoveNthNode {

    class ListNode {
        public int val;
        public ListNode next;
        public ListNode(int val) { this.val = val; }
        public ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    };

    
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null) return null;
        
        int count = 0;
        ListNode temp = head;
        while(temp != null) {
            count++;
            temp = temp.next;
        }
        
        temp = head;
        int pos = count - n - 1;
        
        while(pos-- > 0 && temp != null) {
            temp = temp.next;
        }
        
        if(temp != null && temp.next != null) {
            temp.next = temp.next.next;
        }
        
        if(pos == 1 && count == 1) {
            return head.next;
        }
        
        return head;
    }

    public static void main() {
        RemoveNthNode n = new RemoveNthNode();
        ListNode head = new ListNode(10);
        ListNode result = n.removeNthFromEnd(head, 1);

        System.out.println(result);
    }
};

