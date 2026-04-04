// Last updated: 4/4/2026, 11:07:10 PM
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        if (m == 0) {
            return false; // Empty matrix edge case
        }
        int n = matrix[0].length;
        if (n == 0) {
            return false; // Empty row edge case
        }
        
        // Check if target is equal to the last element of the matrix
        if (matrix[m-1][n-1] == target) {
            return true;
        }
        
        // Binary search to find the correct row 'i'
        int start = 0;
        int end = m - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // Check if target is in the current row
            if (target >= matrix[mid][0] && target <= matrix[mid][n-1]) {
                // Perform binary search on this row
                int left = 0;
                int right = n - 1;
                
                while (left <= right) {
                    int colMid = left + (right - left) / 2;
                    if (matrix[mid][colMid] == target) {
                        return true; // Found the target
                    } else if (matrix[mid][colMid] < target) {
                        left = colMid + 1; // Target is in the right half
                    } else {
                        right = colMid - 1; // Target is in the left half
                    }
                }
                return false; // Target not found in this row
            } else if (target < matrix[mid][0]) {
                end = mid - 1; // Go to upper half
            } else {
                start = mid + 1; // Go to lower half
            }
        }
        
        return false; // Target not found in matrix
    }
}
