class Solution {
public:
    int trap(vector<int>& height) {
        int mxid=0;
        vector<int> fow(height.size());
        for(int i = 0 ; i<height.size() ; i++){
            fow[i]=mxid;
            if(height[mxid]<height[i])mxid=i;
        }
        mxid=height.size()-1;
        for(int i = height.size()-1 ; i>=0 ; i--){
            if(height[fow[i]]>height[mxid])fow[i]=mxid;
            if(height[i]>height[mxid])mxid=i;
        }
        int ans=0;
        for(int i = 0 ; i<height.size() ; i++){
            ans+=max(0,height[fow[i]]-height[i]);
        }
        return ans;
    }
};
