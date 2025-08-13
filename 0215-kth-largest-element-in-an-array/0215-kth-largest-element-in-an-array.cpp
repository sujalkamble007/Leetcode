class Solution {
public:
//create the priority_queue (min heap ) to store smallest element till k 
//iterate thourgh array 
    //push element into heap 
    //if heap.size() >  k --> pop()
    //return heap.top()
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int> , greater<int>>minHeap;

        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
            if(minHeap.size() > k )minHeap.pop();
        }
        return minHeap.top();
    }
};