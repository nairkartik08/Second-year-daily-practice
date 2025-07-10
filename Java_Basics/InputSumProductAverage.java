package Java_Basics;
import java.util.Scanner;
public class InputSumProductAverage 
{
      public static void main(String[] args) {
        Scanner S= new Scanner(System.in);
         System.out.print("Enter the first number: ");
         int n1= S.nextInt();
         System.out.print("Enter the second number: ");
         int n2= S.nextInt();
         int sum = n1+n2;
         int product = n1*n2;
         int average = (n1+n2)/2;
         System.out.printf("Sum= %d\n",sum);
         System.out.printf("Product= %d\n",product);
         System.out.printf("Average= %d",average);
         S.close();

      }
}
