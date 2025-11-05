import java.util.Scanner;

public class GradeBookTest
{
     public static void main(String [] args)
         {
             String getCourse;
             int numGrades;
 
             System.out.println("Please enter the course name: ");
             Scanner inputS = new Scanner(System.in);
             getCourse = inputS.nextLine();
             System.out.println("Please enter the NUMBER OF GRADES: ");
             Scanner inputN = new Scanner(System.in);
             numGrades = inputN.nextInt();
          
            GradeBook b1 = new GradeBook(getCourse,numGrades);
             
            b1.cal();
         }
}