class Solution {
public:

    bool canKokoFinishBananaWithKSpeed(vector<int>&piles, int h, int k){
        long long int totalHoursTakenByKokoToFinishAllBananas = 0;
        for(int i=0; i<piles.size(); i++)
        totalHoursTakenByKokoToFinishAllBananas += ceil(piles[i] /(double)k);

        return totalHoursTakenByKokoToFinishAllBananas <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int start = 1;
       auto it = max_element(piles.begin(),piles.end()); 
       int end = *it;
       int ans = 0;
       while(start <= end){
        int mid = (start + end) >> 1;
        int k = mid;
        if(canKokoFinishBananaWithKSpeed(piles, h, k)){
         ans = k;
         end = mid-1;
        }
        else
        start = mid + 1;
       }
       return ans;
    }
};