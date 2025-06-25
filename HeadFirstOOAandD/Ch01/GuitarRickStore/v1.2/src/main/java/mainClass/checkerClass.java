package mainClass;

import sample.guitarrickstore.Guitar;
import sample.guitarrickstore.GuitarSpec;

import java.util.Iterator;
import java.util.List;

public class checkerClass
{
    public static void checker(List checkGuitarList)
    {


        if(!checkGuitarList.isEmpty())
        {
            System.out.println("Erin, you might like these guitars:");
            for(Iterator i = checkGuitarList.iterator(); i.hasNext();)
            {
                Guitar guitar = (Guitar)i.next();

                GuitarSpec spec = guitar.getSpec();

                System.out.println("  We have a  " + spec.getBuilder() + " "
                        + spec.getModel() + " "
                        + spec.getType() + " guitar:\n     "
                        + spec.getBackWood() + " back and sides,\n     "
                        + spec.getTopWood() + " top.\nYou can have it for only $"
                        + guitar.getPrice() + "!\n  ----"
                );
            }

        }
        else
        {
            System.out.println("Sorry, Erin, we have nothing for you.");
        }

    };
}
