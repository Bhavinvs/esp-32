# 🌡️ ESP32 Temperature and Humidity Monitor using DHT22 Sensor

📝 **Project Description**  
This project demonstrates how to monitor environmental conditions using an ESP32 microcontroller and a DHT22 sensor. The system reads temperature and humidity data from the sensor and displays it in the Serial Monitor. This setup is ideal for home automation, weather stations, or indoor environmental monitoring.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read data from the DHT22 sensor and display it in the Serial Monitor.  
- `diagram.json` – Circuit layout for ESP32 connected with a DHT22 sensor.  
- `library.txt` – Indicates the required library (**DHT sensor library**) used in the project.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432742936822031361)

Use the temperature and humidity sliders to simulate different environmental conditions. Open the Serial Monitor to view real-time data updates from the sensor.

🔧 **How to Customize**  
- Replace the Serial Monitor output with an OLED/LCD display for better visual feedback.  
- Set thresholds and trigger alerts using a buzzer or LEDs for specific temperature or humidity levels.  
- Send data to the cloud (e.g., Blynk, ThingSpeak) for remote logging and monitoring.  

📚 **Learning Focus**  
- Interfacing the DHT22 sensor with the ESP32 microcontroller.  
- Using the **DHT sensor library** to retrieve temperature and humidity data.  
- Serial communication and environmental sensing for smart applications.
