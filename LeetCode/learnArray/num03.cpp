class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    //어떤 사이트에서 heapsort 코드 가지고 와서 그냥 매개변수만 바꿔서 풂,,,다른 사람 풀이 보니까 mergesort가 더 빠른듯! 
    // vector 자체에도 'sort(A.begin(),A.end());' 정렬해 주는 내장 함수가 있는 듯
       for(int i=0;i<nums.size();i++){
           nums[i]*=nums[i];
       }
        heapSort(nums, nums.size());  
        return nums;
    }
    void heapify(vector<int>& arr, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(vector<int>& arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
};
