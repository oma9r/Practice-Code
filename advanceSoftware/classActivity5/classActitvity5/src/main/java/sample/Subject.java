package sample;

import java.util.ArrayList;

public class Subject {

    ArrayList<Observer> observers = new ArrayList<>();
    private int value;

    public void setValue(int value) {
        int oldValue = this.value;
        this.value = value;
        notifyObservers(value,oldValue);
    }

    public int getValue() {
        return value;
    }

    public void attach(Observer otherObserver) {
        observers.add(otherObserver);
    }

    public void notifyObservers(int newValue,int oldValue) {
        for (Observer observer : observers) {
            observer.update(newValue,oldValue);
        }
    }
}
