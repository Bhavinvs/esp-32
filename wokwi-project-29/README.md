# ESP32 Motion-Activated LED using PIR Sensor and Relay

🚶‍♂️💡 **Project Description**  
This project demonstrates how to use a **PIR motion sensor** with a **relay module** and an **LED** to create an automatic lighting system. When the PIR sensor detects motion, it outputs a HIGH signal, which triggers the relay to turn ON the LED. This simulates a real-world motion-triggered security or smart light.

📁 **Files in This Repository**
- `sketch.ino` – Arduino code to control the LED through a relay based on PIR motion detection.
- `diagram.json` – Circuit layout showing ESP32, PIR sensor, relay, and LED.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433383913646995457)

**How it works:**
- The PIR sensor detects motion and sends a HIGH signal.
- ESP32 activates the relay.
- The LED connected through the relay turns ON.
- When no motion is detected, the relay deactivates and the LED turns OFF.

📦 **Libraries Used**  
No external libraries are required. The code uses only built-in functions like `digitalRead()` and `digitalWrite()`.

🔧 **How to Customize**  
- Adjust the delay or add a timer to keep the light on for a fixed time after motion.
- Replace the LED with a real appliance or lamp using a properly rated relay.
- Use additional sensors to expand into a full smart security system.

📚 **Learning Focus**
- Interfacing a PIR motion sensor with ESP32.
- Controlling output devices using a relay.
- Implementing basic motion-triggered automation.
