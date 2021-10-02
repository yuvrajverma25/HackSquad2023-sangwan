/**
 * https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/637/week-2-september-8th-september-14th/3973/
 */
public class MaximumNumberOfBalloons {

    public static void main(String[] args) {
        String text = "loonbalxballpoon";
        MaximumNumberOfBalloons solution = new MaximumNumberOfBalloons();
        System.out.println(solution.getMaximumNumberOfBalloons(text));
    }

    public int getMaximumNumberOfBalloons(String text) {
        
        int[] chars = new int[15];
        for (char c : text.toCharArray()) {
            if(c -'a' > 14) continue;
            chars[c - 'a']++;
        }
        int minimum = chars[1];                     // for b
        minimum = Math.min(minimum, chars[0]);          // for a
        minimum = Math.min(minimum, chars[11] / 2);     // for l/2
        minimum = Math.min(minimum, chars[14] / 2);     // for o/2
        minimum = Math.min(minimum, chars[13]);         // for n
        return minimum;
    }
}