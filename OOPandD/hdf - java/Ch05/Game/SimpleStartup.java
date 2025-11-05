public class SimpleStartup
{
      
         //attributes 

              private int [] locationCells;
              private int numOfHits;

         //constructors

              public SimpleStartup(int [] locs,int numOfHits)
               {
                  this.locationCells = locs;
                  this.numOfHits = numOfHits;
               }

         //methods
           //getter and setter methods

              public void setLocationCells(int [] locs)
               {
                   this.locationCells = locs;
               }
             
              public void setNumOfHits(int numOfHits)
                {
                   this.numOfHits = numOfHits;
                }
 
              public int getNumOfHits()
                {
                    return this.numOfHits;
                }

              
            //main methods

              public String checkYourself(int guess)
                 {
                    String result = "miss";

                    for(int cell : locationCells) 
                      {
                         if(guess == cell) 
                           {
                              result = "hit!";
                              numOfHits++;
                              break;
                            }// if end
                      }//for end

                         if(numOfHits == locationCells.length)
                           {
                             result = "kill";
                           }// end of if

                    System.out.println(result);

                    return result;

                  }//end method

               
   }//end of class
          