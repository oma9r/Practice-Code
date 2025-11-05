public class test1
  {


      public static void main(String [] args)
        {

             int [][] b = new int [2][];

             b[0] = new int [5]; 
             b[1] = new int[3];

             b[0][0] = 00;
             b[1][2] = 12;

            System.out.println("b[0][0] = " + b[0][0]);
            System.out.println("b[1][2] = " + b[1][2]);
            System.out.println("b[1][3] = " + b[1][3]);
            
         }
   }