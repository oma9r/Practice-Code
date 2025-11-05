public class Display 
    {

          private int number;
          private char charAc;

          public Display(int number,char character) 
             {
                 this.number = number;

                 this.charAc = character;

                 //System.out.println(this.charAc);

              }


           public void draw()
             {
                 for(int i=0;i<number;i++)
                   {
                       for(int j=0;j<number;j++)
                           {
                               System.out.print(this.charAc);
                           }
                      System.out.println();
                   }
              }


        }

