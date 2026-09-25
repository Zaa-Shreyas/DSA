class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low = 1;
        long long high = position[position.size()-1] - position[0];
        long long mid;
        while(low<=high){
            mid = low+(high-low)/2;
            int counter = 1;
            int curr = 0;
            for(int i = 1; i < position.size(); i++){
                if(position[i]-position[curr] >= mid){
                    curr = i;
                    counter++;
                }
            }
            if(counter >= m){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;

    }
};