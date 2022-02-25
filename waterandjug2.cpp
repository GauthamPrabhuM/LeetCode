class Solution {
public:
    bool canMeasureWater(int jug1, int jug2, int target) {
        if(jug1+jug2<target)
            return 0;
        queue<pair<int,int>> q;
        set<pair<int,int>> st;
        st.insert({jug1,jug2});
        q.push({jug1,jug2});
        while(!q.empty())
        {
            auto top=q.front();
            q.pop();
            int x=top.first;
            int y=top.second;
            if(x+y==target)
                return 1;
            int X,Y;
            X=x-min(x,jug2-y);
            Y=y+min(x,jug2-y);
            if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            Y=y-min(y,jug1-x);
            X=x+min(y,jug1-x);
             if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            X=jug1;
            Y=y;
             if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            X=x;
            Y=jug2;
             if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            X=0;
            Y=y;
             if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            X=x;
            Y=0;
             if(st.count({X,Y})==0)
            {
                st.insert({X,y});
                q.push({X,Y});
            }
            
        }
        return false;
        
    }
};
