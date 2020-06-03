class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size()/2;
        int a=0, b=0,cost =0;
        
        sort(costs.begin(), costs.end(), [](const auto &lhs, const auto &rhs){
            return abs(lhs[0]-lhs[1]) > abs(rhs[0]-rhs[1]);
        });
        
        int i=0;
        while(a<n && b<n){
            if(costs[i][0]<costs[i][1]){
                a++;
                cost+=costs[i][0];
            }
            else if(costs[i][0]>costs[i][1]){
                b++;
                cost+=costs[i][1];                    
            }
            else{// this and all further candidates have equal cost for both the cities
                a++;
                cost+=costs[i][0];
            }
            i++;
            cout<<cost<<" "<<i<<endl;
        }
        if(a==n && b<n){
            while(b!=n){
                cost += costs[i][1];
                b++;i++;
            }
        }
        else if(a<n && b==n){
            while(a!=n){
                cost += costs[i][0];
                a++;i++;
            }
        }
        return cost;
    }
};
