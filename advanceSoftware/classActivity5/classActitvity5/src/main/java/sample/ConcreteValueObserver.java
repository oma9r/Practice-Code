package sample;

import java.util.Observable;

public class ConcreteValueObserver extends Observer {

    public ConcreteValueObserver(Subject subject) {
        super(subject);
    }

    @Override
    public void update(int newType,int oldValue) {
        System.out.println("ConcreteValueObserver: The new value: " + newType);
    }

}
