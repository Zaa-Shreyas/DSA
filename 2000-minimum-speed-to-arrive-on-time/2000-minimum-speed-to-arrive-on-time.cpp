class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 10000000;
        int mid;
        if(dist.size()-1>=hour) return -1;
        while(low<=high){
            mid = low+(high-low)/2;
            double h = 0;
            for(int i = 0; i<dist.size(); i++){
                if(i == dist.size()-1){
                    h += (double)dist[i]/mid;
                }
                else{
                    h += ceil((double)dist[i]/mid);
                }
                
            }
            if(h<=hour){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low; 
    }
};