# ESP32 Water Level Controller using Ultrasonic Sensor and LED

💧 **Project Description**  
This project simulates a basic water level controller using an ESP32 microcontroller and an HC-SR04 ultrasonic sensor. It measures the distance to the water surface inside a tank. If the water level is **too low** (distance > 180 cm), the LED (representing a water pump) is turned **off**. If the water level is **too high** (distance < 20 cm), the LED is turned **on** to stop further filling. This system prevents overflow and dry run conditions in a water tank.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read distance and control the LED (motor simulation).  
- `diagram.json` – Circuit layout for ESP32, ultrasonic sensor, and LED.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433286448567659521)

Use the virtual object slider to adjust the water level. When the distance is below 20 cm, the LED turns **on** (tank full). When it's above 180 cm, the LED turns **off** (tank empty).

🔧 **How to Customize**  
- Adjust the distance thresholds in `sketch.ino` to fit your actual tank dimensions.  
- Replace the LED with a relay module to control a real water pump.  
- Add a buzzer or LCD display for alerts and status indication.

📚 **Learning Focus**  
- Measuring water level using ultrasonic distance sensing.  
- Using conditional logic to control outputs (e.g., pump) based on sensor input.  
- Simulating smart control systems with ESP32 for real-life applications.
