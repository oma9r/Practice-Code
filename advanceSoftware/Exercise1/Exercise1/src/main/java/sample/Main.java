package sample;

public class Main {
    public static void main(String[] args) {

        WeatherStation station = new WeatherStation();

        // Register displays using adapters
        station.register(new PhoneAdapter(new PhoneDisplay()));
        station.register(new TVAdapter(new TVDisplay()));

        // Case 1: Manual temperature
        station.setTemperature(22);

        // Case 2: Temperature from external API
        ExternalWeatherAPI api = new ExternalWeatherAPI();
        ExternalWeatherAdapter adapter = new ExternalWeatherAdapter(api);

        float tempC = adapter.getTemperatureInCelsius();
        station.setTemperature(tempC);
    }
}
