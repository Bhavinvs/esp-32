# ESP32 Water Level Controller using Ultrasonic Sensor and LED

💧 **Project Description**  
This project simulates a water level controller using an ESP32 and an HC-SR04 ultrasonic sensor placed at the **top of a water tank**. The sensor measures the distance to the water surface:

- If the distance is **less than 20 cm** (tank is almost full), the LED (representing a motor or alert) is turned **on**.  
- If the distance is **greater than 180 cm** (tank is almost empty), the LED is turned **off**.

This system is ideal for automating water level monitoring and preventing tank overflow or dry-run conditions.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read water level and control the LED.  
- `diagram.json` – Circuit layout for ESP32, ultrasonic sensor, and LED.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433286448567659521)

Use the object slider to simulate different water levels.  
- When the object is **closer to the sensor (< 20 cm)** → LED turns **on**.  
- When the object is **farther from the sensor (> 180 cm)** → LED turns **off**.

🔧 **How to Customize**  
- Modify the distance thresholds in `sketch.ino` to suit your tank’s dimensions.  
- Replace the LED with a relay module to control an actual water pump or motor.  
- Add serial output or an LCD display for real-time water level monitoring.

📚 **Learning Focus**  
- Accurate water level detection using ultrasonic sensors.  
- Conditional output control based on real-time sensor data.  
- Simulating practical water management systems using ESP32.
