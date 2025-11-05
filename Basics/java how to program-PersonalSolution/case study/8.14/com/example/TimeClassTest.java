import com.example.time.*;



public class TimeClassTest{

        
        public static void main(String [] args)
          {
              TimeClass time = new TimeClass(13,45,30);
               System.out.println("UniversalTime: " + time.toUniversalString());
               System.out.println("Standard Time: " + time.toString());
          }
 }