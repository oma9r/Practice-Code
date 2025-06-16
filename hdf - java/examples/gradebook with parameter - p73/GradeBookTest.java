import java.util.Scanner;
public class GradeBookTest
{
   public static void main(String [] args) 
    {
       GradeBook myBook = new GradeBook();

       Scanner input1 = new Scanner(System.in);
       
       System.out.println("please enter the name you want?");

       //String nameOfCourse = input1.nextLine();

       myBook.displayMessage(input1.nextLine());
     }// end of main method
 
}// end of class GradeBookTest 
       