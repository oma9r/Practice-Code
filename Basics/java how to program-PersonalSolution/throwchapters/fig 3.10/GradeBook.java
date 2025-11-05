public class GradeBook 
{
      
         private String courseName;


        public GradeBook(String courseName)
         {
            this.courseName = courseName;
         }
       

          public void setCourseName(String courseName)
    {
             this.courseName = courseName;
    }
      
         public String getcourseName()
      {
         return this.courseName;
      }
 
         public void displayMessage()
        {
            System.out.println("Welcome to the grade book: " + getcourseName() );
        }

}