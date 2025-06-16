public class Smallest
  {
       //attruibets

         private int numOfNumbers;
         
         //constructors

          public Smallest(int numOfNumbers)
           {
              this.numOfNumbers = numOfNumbers;
           }

          //methods 


           public int cal(int [] numbers)
            {
 
                int temp = numbers[0];

                for(int i =0; i<numbers.length;i++)
                  {
                      if(numbers[i] < temp)
                          {
                             temp = numbers[i];
                          }
                   }
                 return temp;
             }
      }
                 