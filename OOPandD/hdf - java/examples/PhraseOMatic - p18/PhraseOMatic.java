//import java.util.Random
public class PhraseOMatic 
{
   public static void main(String [] args)
 {
      String[] wordListOne = {"agnostic", "opinionated","voice activated", "haptically driven", "extensible", "reactive", "agent based", "functional", 
        "AI enabled", "strongly typed"}; 

      String[] wordListTwo = {"loosely coupled", "six sigma", "asynchronous", "event driven", "pub-sub", "IoT", "cloud native",
        "service oriented","containerized", "serverless", "microservices", "distributed ledger"};

      String[] wordListThree = {"framework", "library", "DSL", "REST API", "repository", "pipeline", "service mesh", "architecture", "perspective", "design", 
         "orientation"};

      int oneLength = wordListOne.length;
      int secondLength = wordListTwo.length;
      int thirdLength = wordListThree.length;
      
      java.util.Random randomGeneroter = new java.util.Random();
      int rand1 = randomGeneroter.nextInt(oneLength);
      int rand2 = randomGeneroter.nextInt(secondLength);
      int rand3 = randomGeneroter.nextInt(thirdLength);
      
          String phrase = wordListOne[rand1] + "" + wordListTwo[rand2] + "" + wordListThree[rand3] ;
      
      System.out.println("What we need: " +phrase);
  }//end of main method
}//end of class
      
          