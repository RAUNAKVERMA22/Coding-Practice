//A Strong Number (or sometimes called a factorion) is a number that equals the sum of the factorials of its individual digits.

import java.util.*;
public class Main{
    public static int factorial(int n){
        if(n==0 || n==1) return 1;
        else return n*factorial(n-1);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int temp= n, sum = 0;
        while(temp>0){
            int digit = temp%10;
            sum = sum + factorial(digit);
            temp = temp/10;
        }
        if(sum == n)
            System.out.println(n+" Strong Number");
        else 
            System.out.println(n+" Not Strong Number");
    }
}
