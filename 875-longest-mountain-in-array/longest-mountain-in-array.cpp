class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int largest = 0;
        for(int i =1; i<=n-2;){
            
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                int count = 1;
                int j =i;
                //count backward
                while((j>=1) && (arr[j]>arr[j-1])){
                    count++;
                    j--;
                }

                //count forward
                while((i<=n-2) && (arr[i]>arr[i+1])){
                    count++;
                    i++;
                }
                largest = max(largest,count);
            }else{
                i++;
            }
        }
        return largest;
        
    }
};