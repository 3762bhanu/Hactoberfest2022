package DP;
import java.util.*;
public class SubsetSum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n; 
        n = in.nextInt(); // number of items
        int arr[] = new int[n];
        for (int i = 0; i < n; i++)
		    arr[i] = in.nextInt();    
        int sum = in.nextInt(); // Knapsack capacity
	System.out.println(isSubsetPossible(arr, n, sum));
        in.close();
    }

    public static boolean isSubsetPossible(int[] arr, int n, int sum) {
        boolean[][] t = new boolean [n+1][sum+1];
        for(int i = 0; i<n+1; i++)
            t[i][0] = true;
        for(int i = 1; i<n+1; i++)
        {
            for(int j = 1;j<sum+1; j++)
            {
                if(arr[i-1]<=j)
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
                else
                    t[i][j] = t[i-1][j];
            }
        }

        return t[n][sum];
    }
}
