class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        sort(people.begin(),people.end(), [] (const auto &lhs, const auto &rhs){
            return lhs[0] < rhs[0];
        });
        
        vector<vector<int>> v(n, vector<int> (2,-1));
        int small_cnt,j;
        for(int i=0;i<n;i++){
            small_cnt = 0;
            j = 0;
            for(j=0; small_cnt<people[i][1]; j++){
                if((v[j][0] == -1) || (v[j][0] == people[i][0]))
                    small_cnt++;
            }
            while(v[j][0]!=-1) 
            {j++;}
            v[j][0] = people[i][0];
            v[j][1] = people[i][1];
        }
        return v;
    }
};
