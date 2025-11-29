package sample;

import java.util.ArrayList;
import java.util.List;

class WeatherStation {
    private float temperature;
    private List<Observer> displays = new ArrayList<>();

    public void register(Observer d) { displays.add(d); }
    public void remove(Observer d) { displays.remove(d); }

    public void setTemperature(float t) {
        this.temperature = t;
        updateAll();
    }

    public float getTemperature() { return temperature; }

    private void updateAll() {
        for (Observer d : displays) {
            d.update(temperature);
        }
    }
}

