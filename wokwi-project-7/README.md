# ESP32 Smart Street Lights using LDR, Relay, and LEDs

🌃 **Project Description**  
This project demonstrates a smart street lighting system using an ESP32 microcontroller, an LDR (Light Dependent Resistor), a relay module, and LEDs. The system automatically turns the street lights ON when ambient light falls below a specific threshold (e.g., after sunset) and OFF when sufficient daylight is detected. It simulates a real-world energy-efficient lighting solution.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to control LEDs via a relay based on LDR readings.  
- `diagram.json` – Circuit layout for ESP32 with an LDR, relay module, and LEDs.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432023618409960449)

Use the light level slider to simulate day and night conditions and watch the LEDs turn ON/OFF automatically via the relay.

🔧 **How to Customize**  
- Change the light threshold in `sketch.ino` to match your desired sensitivity.  
- Replace the LEDs with actual street lights or higher power loads using a proper relay.  
- Integrate a real-time clock (RTC) for time-based overrides if needed.

📚 **Learning Focus**  
- Using LDR for ambient light sensing with ESP32.  
- Controlling high-power devices using relays.  
- Implementing automation for real-world smart systems like street lighting.

