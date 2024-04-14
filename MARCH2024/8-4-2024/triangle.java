/*1.Given an array form a triangle such that the last row of the triangle contains all the elements of the array and the row above it will contain the sum of two elements below it.

Sample Input

arr[] = {4, 7, 3, 6, 7};

Sample Output

81
40 41
21 19 22
11 10 9 13
4 7 3 6 7
*/
import java.util.*;

class Triangle{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    ArrayList <Integer> list = new ArrayList<>();
    int arr[]=new int[n];
    for(int i=0;i<n;i++){
      arr[i]=sc.nextInt();
      list.add(arr[i]);
    }
    int f=0,s=1;
    
  
    

