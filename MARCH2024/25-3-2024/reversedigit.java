
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num=input.nextInt();
	  int rev=0;
    while(num>0){
      rev=num%10+rev;
	    num/=10;
      rev*=10;
    }
		System.out.println(rev);
		}
}
