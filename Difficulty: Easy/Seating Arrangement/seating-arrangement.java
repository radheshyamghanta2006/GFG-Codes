class Solution {
    public boolean canSeatAllPeople(int k, int[] seats) {
        int n = seats.length;
        
        for (int i = 0; i < n; i++) {
            // Check if the current arrangement already violates the rule
            if (seats[i] == 1) {
                // If there's an existing adjacent 1 to the right, it's an invalid configuration
                if (i < n - 1 && seats[i + 1] == 1) {
                    return false;
                }
                continue; // Move to the next seat
            }
            
            // Check if the left and right spots are empty or out of bounds
            boolean leftEmpty = (i == 0 || seats[i - 1] == 0);
            boolean rightEmpty = (i == n - 1 || seats[i + 1] == 0);
            
            // If both sides are clear, we can place a person here
            if (leftEmpty && rightEmpty) {
                seats[i] = 1; // Mark the seat as occupied
                k--;          // One less person to seat
            }
        }
        
        // If we seated all k people (or more), return true
        return k <= 0;
    }
}