# ESP32 Glucose Bottle Weight Monitor using Load Cell, LCD, Button, and Buzzer

🏥 **Project Description**  
This project simulates a **glucose bottle monitoring system** for hospital environments using an ESP32. It uses a **load cell with HX711 amplifier**, a **16x4 I2C LCD**, a **button**, and a **buzzer** to notify staff when the bottle is nearly empty.

- The system prompts the user to remove any weight and press a button to **calibrate (tare)** the scale.
- After placing the glucose bottle, pressing the button again starts **monitoring**.
- If the weight falls **below 100 grams (0.1 kg)**, a **siren-like buzzer alert** is triggered.

📁 **Files in This Repository**
- `sketch.ino` – Arduino code for reading weight, LCD display, button handling, and buzzer alert.
- `diagram.json` – Circuit layout for ESP32, HX711, LCD, button, and buzzer.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.
- `libraries.txt` – List of required Arduino libraries.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433549383437110273)

### Usage Instructions:
1. LCD will prompt: _“Unload the hook, and then press button!”_
2. Press the button (GPIO26) to **tare** the scale.
3. Place the glucose bottle (weight).
4. Press the button again to begin monitoring.
5. If weight < 0.1 kg, the buzzer (GPIO14) will play a **siren pattern**.

📌 **Pin Configuration**
| Component      | ESP32 Pin | Description                    |
|----------------|------------|--------------------------------|
| HX711 DT       | GPIO16     | Data pin from load cell        |
| HX711 SCK      | GPIO4      | Clock pin for HX711            |
| Buzzer         | GPIO14     | Buzzer output (tone)           |
| Button         | GPIO26     | Push button input              |
| LCD I2C        | I2C @ 0x27 | 20x4 I2C LCD display           |

📦 **Libraries Used**  
This project requires the following Arduino libraries:
HX711
LiquidCrystal I2C

These are already included in the Wokwi simulation, but for local development, install them via the Arduino Library Manager.

🔧 **How to Customize**  
- Adjust the alert threshold (0.1 kg) in `sketch.ino` to match your real bottle size.
- Modify the buzzer sound pattern by editing the `for` loops.
- Replace buzzer alerts with IoT notifications or SMS for remote monitoring.
- Customize LCD messages to suit your hospital's instructions.

📚 **Learning Focus**
- Using a load cell with HX711 to measure weight via ESP32.
- Taring (zeroing) the scale interactively using a button.
- Real-time monitoring with I2C LCD.
- Sounding alarms based on sensor thresholds.
