public class BottleSong 
{
     
      public static void main(String [] args)
    {
          int bottleNums = 10;
          int count = 1;
          String word = "bottles";
          
           while(bottleNums > 0 )
         {
            if(bottleNums == 1)
            {
              word = "bottle";
            }                               //end of if

            System.out.println(count + "- " + bottleNums + " green " + word + " hanging on the wall,");
            //System.out.println(bottleNums + " green " + word + " hanging on the wall,");
            System.out.println("And if one green bottle should accidentally fall,");
            System.out.println("=================================================");
            bottleNums = bottleNums - 1;
            count+=1;
            
            if(bottleNums > 0) 
                { 
                   System.out.println("There'll be " + bottleNums + " green " + ", hanging on the wall");
                } //end of if
            else 
                {
                    	System.out.println("There are not any bottles");
                } //end of else
          }//end of while loop
      } //end of the main method

}//end of class