import java.util.Scanner;

class GameLancher
{
    public static void main(String [] args)
     {
        GuessGame game1 = new GuessGame();
        game1.startGame();
     }
}//end of the GameLancher class


class GuessGame
{
    //instance varaibles
    Player p1;
    Player p2;
    Player p3;

    //methods
    
    public void startGame()
   {
      Player p1 = new Player();
      Player p2 = new Player();
      Player p3 = new Player();
      
      int guessp1 = 0;
      int guessp2 = 0;
      int guessp3 = 0;
      
      boolean p1isRight = false;
      boolean p2isRight = false;
      boolean p3isRight = false;
      
      int targetNum = (int) (Math.random() *10);

      System.out.println("I'm thinking of a word from 0 to 9...hmmm....");
      
      while(true)
    {
        System.out.println("please enter your guess to start...");
         
        p1.guess();
        p2.guess();
        p3.guess();

        guessp1 = p1.number;
        System.out.println("The first player is: " + guessp1);
        guessp2 = p2.number;
        System.out.println("The second player is: "+guessp2);
        guessp3 = p3.number;
        System.out.println("The third player is: "+guessp3);
        
        if(guessp1 == targetNum) { p1isRight = true;}
        if(guessp2 == targetNum) { p2isRight = true;}
        if(guessp3 == targetNum) { p3isRight = true;}
        
        if(p1isRight || p2isRight || p3isRight)
         {
              System.out.println("we have a winner!");
              System.out.println("The first player? "+p1isRight);
              System.out.println("The second player?"+p2isRight);
              System.out.println("the third player?"+p3isRight);
              System.out.println("Game over,thanks!");
              break;// quit the program
         }//end of if
         
         else { System.out.println("let's play again guys! let's go! beacuse the target number is: "+targetNum); } 
         
        
     }//end of loop

    }//end of method

}//end of the class




class Player 
{
      //instance varaiable 
      int number;
   //methods 
    
     public int guess()
   {
        Scanner input = new Scanner(System.in);
        number = input.nextInt();
        return number;
   }//end of method

}//end of class

   
       
