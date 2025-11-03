class Solution {
    public ArrayList<Integer> safeNodes(int V, int[][] edges) {
        // Code with Radheshyam (.^.)
        // Step 1: Build the reverse graph and compute indegrees
        List<List<Integer>> revAdj = new ArrayList<>();
        int[] indegree = new int[V];

        for (int i = 0; i < V; i++) {
            revAdj.add(new ArrayList<>());
        }

        for (int[] edge : edges) {
            int u = edge[0], v = edge[1];
            revAdj.get(v).add(u);  // Reverse the edge
            indegree[u]++;         // Count original outdegree
        }

        // Step 2: Start with terminal nodes (original outdegree 0)
        Queue<Integer> q = new LinkedList<>();
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.add(i);
            }
        }

        // Step 3: Reverse topological sort
        boolean[] safe = new boolean[V];
        while (!q.isEmpty()) {
            int node = q.poll();
            safe[node] = true;
            for (int neighbor : revAdj.get(node)) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.add(neighbor);
                }
            }
        }

        // Step 4: Collect safe nodes in sorted order
        ArrayList<Integer> result = new ArrayList<>();
        for (int i = 0; i < V; i++) {
            if (safe[i]) {
                result.add(i);
            }
        }

        Collections.sort(result);  // Optional: to return in increasing order
        return result;


    }
}