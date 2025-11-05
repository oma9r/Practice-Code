public class BasePlusCommissionEmployeeTest
  {

        public static void main(String [] args)
         {
           BasePlusCommissionEmployee employee = new BasePlusCommissionEmployee("Bob","Lewis","333-33-3333",5000,0.04,300);

           System.out.println("Employee information obtained by get methods: \n");
           System.out.printf("%s %s\n","First name is",employee.getFirstName() );
           System.out.printf("%s %s\n","First name is",employee.getLastName() );
         }
   }