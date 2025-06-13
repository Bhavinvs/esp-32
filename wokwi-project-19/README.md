# 💡 ESP32 Temperature-Based LED Control using DHT22 Sensor

📝 **Project Description**  
This project demonstrates how to control an LED using temperature data from a DHT22 sensor with an ESP32 microcontroller. The LED automatically turns ON when the temperature falls **below** a preset threshold, making it suitable for smart heating indicators, cold storage monitoring, or environmental alert systems. The project utilizes the DHT sensor library to read temperature data.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read temperature from the DHT22 sensor and control an LED based on a defined threshold.  
- `diagram.json` – Circuit layout showing connections between the ESP32, DHT22 sensor, and LED.  
- `library.txt` – Specifies the required library (**DHT sensor library**) used in this project.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432742965366370305)

Use the temperature slider in the simulation to vary the temperature and observe the LED behavior. When the temperature drops below the threshold, the LED turns ON.

🔧 **How to Customize**  
- Change the temperature threshold value in `sketch.ino` to match your specific application.  
- Use multiple LEDs or actuators for multi-level control based on temperature ranges.  
- Integrate an OLED or LCD to display real-time temperature feedback.  

📚 **Learning Focus**  
- Reading and using temperature data with the **DHT sensor library** on ESP32.  
- Making decisions using real-world sensor data.  
- Building basic automated control systems using microcontrollers.
