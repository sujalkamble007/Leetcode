class Solution {
public:
//     void merge(vector<int>&arr ,int low ,int mid ,int high){
//         vector<int>temp;
//         int left =low ;
//         int right =mid+1;

//         while(left <= mid && right <=high){
//             if(arr[left]<= arr[right]){
//                 temp.push_back(arr[left]);
//                 left++;
//             }else {
//                 temp.push_back(arr[right]);
//                 right++;
//             }
//         }

//         while(left<= mid ){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         while (right <= high){
//             temp.push_back(arr[right]);
//             right++;
//         }

//         for(int i=low ;i<=high ;i++){
//             arr[i]=temp[i-low];
//         }
//     }
//     int countP(vector<int>&arr ,int low ,int mid ,int high){
//         //initialize left and right
//         int count=0;
//        // int left=low;
//         int right=mid+1;
        
//         //iterate through low -> mid
//         for(int i=low ;i<= mid ;i++){
//             //while(check condition )
//             while(right <=high && (long)arr[i] > (2*arr[right])){
//                 right++;
//                  //increment count+=right-(mid+1);
//                 count+=(right-(mid+1));
//             }
//         }
//         //return count;
//        return  (int)count;
//     }
//     int mergeSort(vector<int>&arr ,int low, int high){
//         int count=0;
//         if(low >= high ) return count;
//         int mid =low + (high -low )/2;
//         count+=mergeSort(arr,low ,mid);
//         count+=mergeSort(arr,mid+1 , high);
//         count+=countP(arr,low ,mid ,high);
//         merge(arr,low,mid,high);

//         return count;
//     }
//     int reversePairs(vector<int>& nums) {
//         //apply merge sort while counting the pairs 
//         int n=nums.size();
//         return mergeSort(nums,0,n-1);
//     }
// };


void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && (long long)arr[i] > 2LL * arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += countPairs(arr, low, mid, high); //Modification
    merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}

int reversePairs(vector <int> & skill)
{
    int n=skill.size();
    return mergeSort(skill, 0, n - 1);
}
};