import throwchapters.fig9-4.CommissionEmployee;

public class CommissionEmployeeTest
  {

        public static void main(String [] args)
          {

                CommissionEmployee employee = new CommissionEmployee("Sue","Jones","222-22-2222",1000,0.06);

                System.out.println("Employee information obtained by get methods: \n");
                System.out.printf("%s %s\n","First name is",employee.getFirstName() );
                System.out.printf("%s %s\n","Last name is",employee.getLastName() );
                System.out.printf("%s %s\n","Socail Security Number is",employee.getSocialSecurityNumber() );
                System.out.printf("%s %.2f\n","Gross sales is",employee.getGrossSales());
                System.out.printf("%s %.2f\n","Commission rate is",employee.getCommissionRate());

                employee.setGrossSales(500);
                employee.setCommissionRate(0.1);

                System.out.printf("\n%s:\n\n%s\n","Updated employee information obtained by toString",employee);
           }
      }