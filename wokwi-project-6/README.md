# ESP32 Buzzer Triggered by Low Light (LDR Sensor)

🌙 **Project Description**  
This project demonstrates how to use a Light Dependent Resistor (LDR) with the ESP32 microcontroller to monitor ambient brightness and trigger a buzzer when light levels fall below a specified threshold (100 lux). This is useful for light-based alert systems like night alarms or automatic lighting indicators.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to monitor brightness and control the buzzer.  
- `diagram.json` – Circuit layout for ESP32 with an LDR and buzzer.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/431752215074182145)

Adjust the light level slider in Wokwi to test the buzzer behavior based on brightness changes.

🔧 **How to Customize**  
- Adjust the brightness threshold in `sketch.ino` (default is 100 lux).  
- Replace the buzzer with another alert component (LED, relay, etc.).  
- Tune the analog reading and mapping based on your specific LDR and circuit setup.

📚 **Learning Focus**  
- Reading analog input values using the ESP32.  
- Using conditional logic based on sensor input.  
- Creating responsive systems triggered by environmental changes.

