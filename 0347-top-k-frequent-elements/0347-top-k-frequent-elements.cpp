class Solution {
public:
//create the map to store frequency 
//create the minHeap 
    //iterate thorugh mapp
        //push ({freq , arr[i]})
        //if size > k  pop 

//create the ans vector 
//while !heap.empty 
    //ans.push(second)
    //heap.pop

//return ans;

 
    typedef pair<int , int > pair;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int >mapp;
        for(auto &i : nums){
            mapp[i]++;
        }
        priority_queue<pair , vector<pair> , greater<pair>>minHeap;

        for(auto& i : mapp){
            minHeap.push({i.second , i.first});
            if(minHeap.size() >k  )minHeap.pop();
        }

        vector<int>ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};