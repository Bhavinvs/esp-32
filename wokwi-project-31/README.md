# ESP32 OLED Display with Adafruit SSD1306

🖥️ **Project Description**  
This project demonstrates how to display sensor data or messages on an OLED screen using the ESP32 microcontroller. The display uses I2C communication and is controlled through the Adafruit SSD1306 and GFX libraries. The OneWire library is included for sensor communication (e.g., DS18B20), allowing real-time data to be displayed on the screen.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to display data on the OLED screen using I2C.  
- `diagram.json` – Circuit layout for ESP32 connected to an OLED display and sensor.  
- `libraries.txt` – Contains the required libraries: Adafruit SSD1306, Adafruit GFX Library, OneWire.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433650459425721345)

No downloads required—just click the link, press the green "Start" button, and view sensor data or messages appear on the OLED screen.

🔧 **How to Customize**  
- Modify the displayed content in `sketch.ino` to show temperature, humidity, or any other data.  
- Change font size or position using `setTextSize()` and `setCursor()`.  
- Add graphics, progress bars, or icons using the Adafruit GFX functions.

📚 **Learning Focus**  
- Interfacing an OLED screen with the ESP32 via I2C.  
- Displaying sensor values and messages on screen.  
- Using Adafruit SSD1306, GFX, and OneWire libraries for integrated visual output.
