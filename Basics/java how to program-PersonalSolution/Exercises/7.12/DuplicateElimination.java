import java.util.Scanner;


public class DuplicateElimination 
  {
     
        public static void main(String [] args)
          {



            int input = 0;
            Scanner scanner = new Scanner(System.in);

            int [] array = new int[5];
            int [] array2 = new int[5];

             
            int mainCounter = 0;
    
            boolean check = true;

            do {


                    System.out.println("Enter the value: ");
                    input = scanner.nextInt();

                    if(input < 10 || input > 100)
                       {
                          System.out.println("Try again");

                          continue;
                       }

                    array[mainCounter] = input;

                    //if(array[mainCounter-1] != input) array2[mainCounter] = input;

                    for(int i=0;i<5;i++)
                      {

                          if(input == array2[i])
                           {
                              return;
                            }

                           else
                            {
                              array2[i] = input;
                              break;
                            }
                       }
                     
                    

                      mainCounter++;


               }while(mainCounter<5);


               System.out.println("The list of unique values: ");

               for(int i=0;i<5;i++)
                {
                  if(array2[i] == 0)
                    {
                      System.out.println("The value of " + i + " is empty: ");
                    }
                  else
                    {
                       System.out.println("The value of " + i + " is: " + array2[i]);

                     }
                 }

             

                         
                         
                           
            








          }// end main




    }// end class