# ESP32 OLED Display with DHT22 Temperature and Humidity Sensor

🌡️ **Project Description**  
This project demonstrates how to read temperature and humidity values from a DHT22 sensor and display them on an OLED screen using the ESP32 microcontroller. The OLED communicates over I2C using the Adafruit SSD1306 and GFX libraries, while the DHT sensor is interfaced using the DHT sensor library. This project is ideal for building simple weather or environment-monitoring systems.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read from DHT22 and display data on the OLED.  
- `diagram.json` – Circuit layout for ESP32 connected to DHT22 and OLED display.  
- `libraries.txt` – Contains the required libraries: Adafruit SSD1306, Adafruit GFX Library, OneWire (if used), DHT sensor library.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433650653067326465)

No downloads required—just click the link, press the green "Start" button, and view the temperature and humidity values on the OLED screen.

🔧 **How to Customize**  
- Adjust the layout and font size in `sketch.ino` using `setCursor()` and `setTextSize()`.  
- Add additional sensors or display messages alongside DHT readings.  
- Change temperature units or add warning symbols based on thresholds.

📚 **Learning Focus**  
- Reading temperature and humidity data using the DHT22 sensor.  
- Displaying real-time sensor data on an OLED screen with ESP32.  
- Integrating multiple libraries (DHT, SSD1306, GFX) for a combined display solution.
