package sample;


public class Main {
    public static void main(String[] args) {



        Subject subject = new Subject();
        subject.setValue(10);

        ConcreteValueObserver observer1 = new ConcreteValueObserver(subject);
        subject.attach(observer1);
        subject.setValue(20);
        System.out.println("====================================case 1================================================");
        ByTenChangedObserver observer4 = new ByTenChangedObserver(subject);
        subject.attach(observer4);
        subject.setValue(30);
        ValueLoweredObserver observer2 = new ValueLoweredObserver(subject);
        subject.attach(observer2);
        subject.setValue(21);                // observer4 will not notify due to 21 - 30 < 10
        System.out.println("=====================================case 2===============================================");
        subject.setValue(31);
        System.out.println("=====================================case 3===============================================");
        ByTenChangedObserver observer3 = new ByTenChangedObserver(subject);
        subject.attach(observer3);
        subject.setValue(41);
        System.out.println("=====================================case 4===============================================");
        subject.setValue(28); // less than 41 and 28 - 41 < 10



    }
}