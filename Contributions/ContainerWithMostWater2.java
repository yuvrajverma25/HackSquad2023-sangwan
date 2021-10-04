/*Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.*/

class Solution {
    public int maxArea(int[] height) {
        int len=height.length;
        int max=0;
        int li=0,rj=len-1;
        while(li<rj){
        int l=height[li];
        int r=height[rj];
        int b=rj-li;
        int h=Math.min(l,r);
        int area=b*h;
        if(area>max)
            max=area;
        if(l>=r)
            rj--;
        else
            li++;}
        return max;
    }
}

