package com.company;

public class Reverse {
    public static void main(String[] args) {
        int num = 56789, ans = 0;
        
        while (num != 0){
            int rem = num % 10;
            ans = ans * 10 + rem;
            num/= 10;
            
        }

        System.out.println(ans);
    }
}
