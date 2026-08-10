class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxWater=0;
    int n=height.size();
    int i=0 , j=n-1;

    while(i<j){
        int  width=j-i;

        int ht=min(height[i],height[j]);

        int area=ht*width;

        maxWater=max(maxWater,area);

        if(height[i] > height[j]){
            j--;
        }
        else{
            i++;
        }
    }

    return maxWater;
    }
};