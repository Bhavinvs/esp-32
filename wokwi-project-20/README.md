# ESP32 Temperature Monitoring with DS18B20 Sensor

🌡️ **Project Description**  
This project demonstrates how to measure temperature using the DS18B20 sensor with the ESP32 microcontroller. It uses the OneWire and DallasTemperature libraries to read temperature data over the OneWire protocol. The measured temperature is displayed in real-time through the Serial Monitor. This is a simple and effective way to understand digital temperature sensing.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read and display temperature from the DS18B20 sensor.  
- `diagram.json` – Circuit layout for ESP32 connected to the DS18B20 temperature sensor.  
- `libraries.txt` – Contains the required libraries: OneWire and DallasTemperature.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432747883625956353)

No downloads required—just click the link, press the green "Start" button, and open the Serial Monitor to view live temperature readings.

🔧 **How to Customize**  
- Modify the temperature reading interval in the `sketch.ino` file.  
- Add an LCD or OLED screen to visually display the temperature.  
- Set high/low temperature thresholds to trigger alerts.

📚 **Learning Focus**  
- Using the DS18B20 digital temperature sensor with ESP32.  
- Implementing the OneWire communication protocol.  
- Displaying sensor data using the Serial Monitor with external libraries.
