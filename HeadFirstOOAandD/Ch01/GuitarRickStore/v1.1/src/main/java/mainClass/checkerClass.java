package mainClass;

import sample.guitarrickstore.Guitar;

public class checkerClass
{
    public static void checker(Guitar checkGuitar)
    {


        if(checkGuitar != null)
        {
            System.out.println("Erin, you might like this: " + checkGuitar.getBuilder() + " "
                    + checkGuitar.getModel() + " "
                    + checkGuitar.getType() + " guitar:\n     "
                    + checkGuitar.getBackWood() + " back and sides,\n     "
                    + checkGuitar.getTopWood() + " top.\nYou can have it for only $"
                    + checkGuitar.getPrice() + "!"
            );
        }
        else
        {
            System.out.println("Sorry, Erin, we have nothing for you.");
        }

    };
}
