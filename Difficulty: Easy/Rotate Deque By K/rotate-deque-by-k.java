class Solution {
    public static void rotateDeque(Deque<Integer> dq, int type, int k) {
        // Code with Radheshyam (.^.)
        if(type==1){
            for(int i=0;i<k;i++)
            dq.addFirst(dq.removeLast());
        }
        else{
            for(int i=0;i<k;i++)
            dq.addLast(dq.removeFirst());
        }
        
    }
}