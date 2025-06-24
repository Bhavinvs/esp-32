# ESP32 Motion-Activated LED using PIR Sensor and Relay

🚶‍♂️💡 **Project Description**  
This project demonstrates how to use a **PIR motion sensor** with a **relay module** and an **LED** to simulate an automatic lighting system. When the PIR sensor detects motion, it outputs a **HIGH signal**, which activates the relay and turns **on the LED**. This setup is commonly used in security systems, smart lighting, and energy-saving automation.

📁 **Files in This Repository**
- `sketch.ino` – Arduino code to control the LED through a relay based on PIR motion detection.
- `diagram.json` – Circuit layout showing ESP32, PIR sensor, relay module, and LED.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433383913646995457)

**How it works:**
- When motion is detected by the PIR sensor, it sends a HIGH signal.
- The ESP32 activates the relay module.
- The relay connects the LED, turning it ON.
- When no motion is detected, the relay disconnects and the LED turns OFF.

📌 **Pin Configuration**
| Component      | ESP32 Pin | Description                       |
|----------------|------------|-----------------------------------|
| PIR Sensor     | GPIO13     | Motion detection input            |
| Relay Module   | GPIO12     | Output control signal to relay    |
| LED (via relay)| AC Load or 5V | Connected to relay output       |

📦 **Libraries Used**  
No external libraries are required for this project. It uses only built-in functions like `digitalRead()` and `digitalWrite()`.

🔧 **How to Customize**  
- Change the PIR sensor pin or relay control pin as needed in `sketch.ino`.
- Replace the LED with an actual AC lamp using a properly rated relay module.
- Add a delay or timer function to keep the light on for a fixed duration after motion.

📚 **Learning Focus**
- Interfacing digital sensors (PIR) with ESP32.
- Controlling high-voltage devices through relays.
- Building basic motion-triggered automation systems.
