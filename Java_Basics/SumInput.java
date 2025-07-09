package Java_Basics;
import java.util.Scanner;
public class SumInput 
{
      public static void main(String[] args) {
        Scanner S= new Scanner(System.in);
         System.out.print("ENter the first number: ");
         int n1= S.nextInt();
         System.out.print("ENter the second number: ");
         int n2= S.nextInt();
         int sum = n1+n2;
         System.out.printf("Sum= %d",sum);
         S.close();

      }
}
