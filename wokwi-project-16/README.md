# 🚨 ESP32 Gas Leak Detector using MQ2 Sensor and Buzzer

📝 **Project Description**  
This project demonstrates a simple gas leak detection system using an ESP32 microcontroller, an MQ2 gas sensor, and a buzzer. The system continuously monitors the air for the presence of combustible gases. When the gas concentration exceeds a certain limit (detected via the digital output of the MQ2 sensor), the buzzer is triggered to alert users of the potential hazard.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to monitor the MQ2 sensor and activate the buzzer when gas is detected.  
- `diagram.json` – Circuit layout for ESP32 with the MQ2 gas sensor and buzzer.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432384729619763201)

Use the gas level slider to simulate normal and hazardous conditions and watch the buzzer activate when gas is detected.

🔧 **How to Customize**  
- Adjust the sensitivity of the MQ2 sensor using the onboard potentiometer.  
- Replace the buzzer with other alert systems like LEDs, alarms, or even IoT notifications.  
- Add an LCD or OLED display to show real-time gas concentration (if analog pin is used).  

📚 **Learning Focus**  
- Using MQ2 gas sensor with ESP32.  
- Reading digital signals to trigger alerts.  
- Implementing safety systems using microcontrollers for home or industrial applications.
