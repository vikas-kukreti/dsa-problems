class CircularQueue {
    int head, tail;
    int[] queue;
    int size;
    public CircularQueue(int k) {
        queue = new int[k];
        head = -1;
        tail = -1;
        size = k;
    }
    
    public boolean enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()) {
            head = 0;
        }
        tail = (tail + 1) % queue.length;
        queue[tail] = value;
        return true;
    }
    
    public boolean deQueue() {
        if(isEmpty()) return false;
        if(head == tail) {
            head = -1;
            tail = -1;
            return true;
        }
        head = (head + 1) % queue.length;
        return true;
    }
    
    public int Front() {
        if(isEmpty()) return -1;
        return queue[head];
    }
    
    public int Rear() {
        if(isEmpty()) return -1;
        return queue[tail];
    }
    
    public boolean isEmpty() {
        return head == -1;
    }
    
    public boolean isFull() {
        return ((tail + 1) % size) == head;
    }
}
