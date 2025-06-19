# ESP32 Light-Based Siren using LDR and Buzzer

🌒 **Project Description**  
This project demonstrates how to create a light-sensitive alarm system using an LDR (Light Dependent Resistor) with the ESP32. When ambient light drops below a specific threshold, the ESP32 triggers a buzzer using a `for` loop to generate a **siren-like sound**. The current light level (analog value) is also printed in real-time to the Serial Monitor for monitoring.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read the LDR value, activate buzzer, and print data to Serial Monitor.  
- `diagram.json` – Circuit layout for ESP32, LDR sensor, and buzzer.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433275002940710913)

Adjust the brightness slider in Wokwi to lower the light and trigger the siren sound. Watch the real-time LDR values printed in the Serial Monitor.

🔧 **How to Customize**  
- Change the LDR threshold in `sketch.ino` to tune the trigger sensitivity.  
- Modify the `for` loop to create different sound patterns or use `tone()` for more control.  
- Replace the buzzer with another alert mechanism if desired (e.g., LED strobe).

📚 **Learning Focus**  
- Reading analog values from an LDR sensor using ESP32.  
- Creating dynamic sound patterns with a buzzer using loops.  
- Using sensor data in real-time for environment-triggered automation.
