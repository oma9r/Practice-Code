import javax.swing.JOptionPane;
public class Perfect
{
                
                 private double result;
          
     
                 public Perfect()
                  {
                    result = 0;
                    
                     
                   }



                public void Test(int number)
                   {
                       

                        for(int i=1;i<number;i++)
                           {


                              result = Math.pow(2,number-1) * ( Math.pow(2,number) - 1);   

                           if(number == result)
                       {

                            JOptionPane.showMessageDialog(null,"The number: " + number + " is a perfect number becuase the result: " + result + " and the number: " + number + " is equfelant","Result",JOptionPane.INFORMATION_MESSAGE);

                            //System.out.println("The number: " + number + " is a perfect number becuase the sum: " + sum + " and the factor: " + factor + " is equfelant");

                       }//END IF      
                                
                                      
                            

                              

                           }//END FOR

                    


                }//END TEST


}//END CLASS

                            
             