public class ContainerWithMostWater {

    public static void main(String[] args) {
        int[] height = new int[] {4,3,2,1,4};
        ContainerWithMostWater problem = new ContainerWithMostWater();
        int area = problem.maxArea(height);
        System.out.println(area);
    }

    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1;
        int maxArea = 0;
    
        while (left < right) {
            maxArea = Math.max(maxArea, Math.min(height[left], height[right])
                    * (right - left));
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }

}
