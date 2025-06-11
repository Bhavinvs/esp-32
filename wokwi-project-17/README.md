# 🚨 ESP32 Gas Leak Detector using MQ2 Sensor (Analog Output) and Buzzer

📝 **Project Description**  
This project demonstrates an enhanced gas leak detection system using an ESP32 microcontroller, an MQ2 gas sensor, and a buzzer. Unlike digital output detection, this version uses the analog output of the MQ2 sensor, allowing fine control over the gas sensitivity threshold. When the detected gas level exceeds a user-defined threshold, the buzzer is activated to signal danger.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read analog values from the MQ2 sensor and trigger the buzzer if gas concentration exceeds the threshold.  
- `diagram.json` – Circuit layout for ESP32 with the MQ2 gas sensor (analog) and buzzer.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432384744032441345)

Use the gas level slider to simulate varying concentrations of gas and watch how the buzzer responds when levels go beyond the set threshold.

🔧 **How to Customize**  
- Change the `threshold` value in `sketch.ino` to adjust gas sensitivity.  
- Add an OLED or LCD display to show live gas readings for better monitoring.  
- Extend the system to send alerts via Wi-Fi (e.g., email/SMS) for IoT integration.  

📚 **Learning Focus**  
- Reading analog signals from gas sensors with ESP32.  
- Setting and tuning sensor thresholds for real-time alerts.  
- Building real-world safety and monitoring systems using microcontrollers.
