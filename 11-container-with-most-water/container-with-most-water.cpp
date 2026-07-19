class Solution {
public:
    int maxArea(vector<int>& height) {

        int start=0;
        int last=height.size()-1;
        int ans=0;

        while(start<last){

            int top=min(height[start],height[last]);
            int width=last-start;

            int area=top * width;
            ans= max(area,ans);

            if(height[start]<height[last]){
                start++;
            }
            else{
                last--;
            }
        }

        return ans;
        
    }
};