public class SimpleStartupTestDrive
   {
       public static void main(String [] args)
         {
              SimpleStartup test1 = new SimpleStartup();
              
              int [] locations = {2,3,4};

              test1.setLocationCells(locations);

              int userGuess = 2;

              String result = test1.checkYourself(userGuess);

              //System.out.println(result);

              String testResult = "Failed";

             if (result.equals("hit!")) 
             {
               testResult = "passed";
             }

              System.out.println(testResult);
           }
     }