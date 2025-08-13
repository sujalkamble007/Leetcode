class Solution {
public:
//create the maxHeap -->  pair< int ,   pair<int , int >>
//iterate thourgh array and 
    //calculate the distance -> points[i][0]^2 + points[i][1]^2;
    //heap.push ( { dist  , {points[i][0] , points[i][1] }  } );
    //if(size > k) pop 
//create matrix to store the ans 
    // while !heap.empty
        // ans.push({heap.top.second.first ,  heap.top.second.second});
        //heap.pop

//return ans;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int , pair<int , int >>>maxHeap;
        int n=points.size();
        for(int i=0;i<n;i++){
            int dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            maxHeap.push({dist ,{points[i][0] ,points[i][1]}});

            if(maxHeap.size() > k) maxHeap.pop();
        }

        vector<vector<int>>ans;
        while(!maxHeap.empty()){
            ans.push_back({maxHeap.top().second.first , maxHeap.top().second.second });
            maxHeap.pop();
        }
        return ans;
    }
};