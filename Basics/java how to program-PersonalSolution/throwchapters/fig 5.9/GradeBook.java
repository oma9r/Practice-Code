import java.util.Scanner;

public class GradeBook 
{
     
           //attrubites

           private String courseName;
           private int numGrade;
           private int totalGrade;
           private int aCount;
           private int bCount;
           private int cCount;
           private int dCount;
           private int fCount;

           //constuructors 

             //defualt constructor 

          public GradeBook()
           {
           courseName = "";
           numGrade = 0;
           totalGrade = 0;
            aCount = 0;
            bCount = 0;
            cCount = 0;
            dCount = 0;
           fCount = 0;
         };

          public GradeBook(String courseName,int totalGrade)
            {
                this.courseName = courseName;
                this.totalGrade = totalGrade;
            };

         public void cal()

        {
           int sum = 0;


           for(int i=1; i<=this.totalGrade;i++)
             {
                 System.out.println(i + " - Please enter the grade: ");
                 Scanner input1 = new Scanner(System.in);

                 switch(input1.nextInt())
                   {
                       case 9: 
                       case 10: ++this.aCount;
                       break;
                       
                       case 8: ++bCount;
                       break;
                         
                       case 7: ++cCount;
                       break;
                       
                       case 6: ++dCount;
                       break;
 
                       default: ++fCount;
                       break;
                   }//end of switch

                  ++this.numGrade;

               }//end of for loop
           
           System.out.println("The course name: " + this.courseName);
           System.out.println("The A grade: " + this.aCount);
           System.out.println("The B grade: " + this.bCount);
           System.out.println("The C grade: " + this.cCount);
           System.out.println("The D grade: " + this.dCount);
           System.out.println("The F grade: " + this.fCount);
           System.out.println("The total grade: " + this.totalGrade);
             


        }//end of cal 

    

}//end of class
                 
                  
          

           