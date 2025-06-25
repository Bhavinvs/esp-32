# ESP32 Dual PIR-Based Room Light Automation

🚶‍♂️🚶‍♀️💡 **Project Description**  
This project uses **two PIR motion sensors** with an **ESP32** to create a smart room lighting system. The sensors are positioned at the **entrance and exit** of a room. When either sensor detects motion, the **LED (representing a room light)** turns ON automatically. This setup is perfect for energy-efficient, hands-free lighting in homes, offices, or corridors.

📁 **Files in This Repository**
- `sketch.ino` – Arduino code to turn on the light when motion is detected by either sensor.
- `diagram.json` – Circuit layout showing ESP32, two PIR sensors, and LED.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
Simulate this project in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433467355093477377)

**How it works:**
- One PIR sensor is placed at the entrance, and another at the exit.
- If **either** sensor detects motion, the ESP32 turns ON the LED.
- When no motion is detected, the LED turns OFF automatically.
- This allows lights to stay ON while someone is entering or exiting the room.

📦 **Libraries Used**  
No external libraries are required. This project uses only built-in Arduino functions.

🔧 **How to Customize**
- Add a timer to keep the light ON for a few seconds after motion is detected.
- Integrate with a real lamp or appliance using a relay module.
- Use a counter to track the number of people in the room and automate lights more precisely.

📚 **Learning Focus**
- Handling multiple digital inputs using ESP32.
- Building smart automation systems with multiple sensors.
- Improving user convenience and energy efficiency with motion-based lighting.
