import heapq

class Solution:
    # Function to return the minimum cost to react at bottom right cell from top left cell.
    def minimumCostPath(self, grid):
        n = len(grid)
        
        # Distance matrix to store the minimum cost to reach each cell
        dist = [[float('inf')] * n for _ in range(n)]
        
        # Priority Queue for Dijkstra: (current_total_cost, row, col)
        pq = [(grid[0][0], 0, 0)]
        dist[0][0] = grid[0][0]
        
        # Directions: Down, Up, Right, Left
        dr = [1, -1, 0, 0]
        dc = [0, 0, 1, -1]
        
        while pq:
            curr_cost, r, c = heapq.heappop(pq)
            
            # Reached bottom-right cell
            if r == n - 1 and c == n - 1:
                return curr_cost
                
            # Skip outdated entries in the heap
            if curr_cost > dist[r][c]:
                continue
            
            # Explore 4-directional neighbors
            for i in range(4):
                nr, nc = r + dr[i], c + dc[i]
                
                if 0 <= nr < n and 0 <= nc < n:
                    new_cost = curr_cost + grid[nr][nc]
                    
                    if new_cost < dist[nr][nc]:
                        dist[nr][nc] = new_cost
                        heapq.heappush(pq, (new_cost, nr, nc))
                        
        return dist[n-1][n-1]