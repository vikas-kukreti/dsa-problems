class Node {
    int val;
    Node next;
    
    public Node(int val) {
        this.val = val;
        this.next = null;
    }
    public void next(Node next) {
        this.next = next;
    }
    public int value() {
        return val;
    }
    public Node next() {
        return this.next;
    }
}


class MyLinkedList {
    
    Node head;

    public MyLinkedList() {
        this.head = null;
    }
    
    public int get(int index) {
        Node current = this.head;
        while(index-- > 0 && current != null) {
            current = current.next();
        }
        if(current != null) {
            return current.value();
        }
        return -1;
    }
    
    public void addAtHead(int val) {
        Node current = new Node(val);
        current.next(this.head);
        this.head = current;
    }
    
    public void addAtTail(int val) {
        if(this.head == null) {
            addAtHead(val);
            return;
        }
        Node current = this.head;
        while(current.next() != null) {
            current = current.next();
        }
        Node next = new Node(val);
        current.next(next);
    }
    
    public void addAtIndex(int index, int val) {
        if(index == 0) {
            Node oldNext = this.head;
            Node newNode = new Node(val);
            this.head = newNode;
            newNode.next(oldNext);
            return;
        }
        Node current = this.head;
        while(index-- > 1 && current != null) {
            current = current.next();
        }
        if(current != null) {
            Node oldNext = current.next();
            Node newNode = new Node(val);
            current.next(newNode);
            newNode.next(oldNext);
        }
    }
    
    public String toString() {
        String out = "[";
        Node current = this.head;
        while(current != null) {
            out += current.value() + (current.next() != null ? ", " : "");
            current = current.next();
        }
        out += "]";
        return out;
    }
    
    public void deleteAtIndex(int index) {
        if(this.head == null) return;
        if(index == 0) {
            this.head = this.head.next();
        }
        Node prev = this.head;
        while(index-- > 1 && prev != null) {
            prev = prev.next();
        }
        if(prev != null && prev.next() != null) {
            prev.next(prev.next().next());
        }
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */