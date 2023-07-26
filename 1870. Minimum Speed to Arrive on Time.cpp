 bool isPossible(vector<int>& dist, double hour,int mid){

        double sum=0;
        for(int i=0;i<dist.size();i++){
            double time=dist[i]*1.0/mid;

            if(i!=dist.size()-1){
                sum+=ceil(time);
            }
            else{
                sum+=time;
            }
        }

        if(sum<=hour) return true;
        return false;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1;
        int high=10000007;
        int minSpeed=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(dist,hour,mid)){
                minSpeed=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return minSpeed;
    }
