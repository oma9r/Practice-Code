
public class TestDog
{
    
   public static void main(String [] args)
      {
         Dog myDog = new Dog();
         myDog.bark();
      }//end main mathod
}//end class TestDog


 class Dog 
{
 
    //instance varaiables 
 
    int size; 
    String breed;
    String name;
    
    //methods
    
      void bark()
  {
        System.out.println("Ruff! Ruff!");
  }


}//end of the class
     