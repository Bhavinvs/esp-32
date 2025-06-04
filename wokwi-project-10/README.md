# ESP32 LDR-Based Buzzer Alert System (Project 10)

## 🚦 Project Description

This project uses an LDR (Light Dependent Resistor) with the ESP32 to monitor light intensity. When the surrounding brightness drops below a certain threshold (i.e., darkness), the buzzer is activated. The current LDR sensor value is continuously displayed in the Serial Monitor for reference.

## 📁 Files in This Repository

- `sketch.ino` – Arduino code that reads LDR values and triggers a buzzer.
- `diagram.json` – Circuit layout showing connections between ESP32, LDR, and buzzer.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

## ▶️ Run the Simulation

You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432200790700493825)

No downloads required—just click the link, press the green "Start" button, and monitor the Serial Monitor and buzzer output based on brightness levels.

## 🔧 How to Customize

- Adjust the threshold value in the code (`if (a >= 1500)`) to make the system more or less sensitive to light.
- Change the buzzer tone frequency or add visual indicators (like LEDs).
- Log LDR readings for data analysis or trigger other outputs like relays or messages.

## 📚 Learning Focus

- Reading analog sensor input using `analogRead()`.
- Controlling actuators (buzzer) based on sensor thresholds.
- Monitoring sensor data in the Serial Monitor for debugging and analysis.
