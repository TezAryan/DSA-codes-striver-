 bool search(vector<int>& arr, int target) {
             int n = arr.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the target
            if (arr[mid] == target) return true;
            // for same elements  in start  end center
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++ ; high--;
                continue;
            }

            // Check if the left part is sorted
            if (arr[low] <= arr[mid]) {
                // Target lies within the left sorted part
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // Right part must be sorted
            else {
                // Target lies within the right sorted part
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

     
        return false;
    };