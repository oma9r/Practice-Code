public class B
{
    
    public static void main(String [] args) 
      {
          
         int [] g = new int [5];

          for(int i = 0;i<g.length;i++)
           {
              g[i] = 8;
            }

          System.out.println("Debugging: ");

          for(int i=0;i < g.length;i++)
          System.out.println("The number of index: " + i + " the value: " + g[i]);

       }


 } 
