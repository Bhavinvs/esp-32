# ESP32 Toll Gate Simulator using Servo Motor and Switches

🚧 **Project Description**  
This project simulates a toll gate system using an ESP32 microcontroller, a servo motor (gate), and two push buttons (Open and Close). When the **Open** button is pressed, the servo rotates to simulate opening the gate, and when the **Close** button is pressed, it returns to the closed position. The project uses the `ESP32Servo` library to control the servo precisely.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to control the servo using two buttons.  
- `diagram.json` – Circuit layout for ESP32, servo motor, and push buttons.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  
- `libraries.txt` – Library dependencies for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432828959555993601)

Press the **Open** button to raise the gate (rotate servo), and press the **Close** button to lower it.

🔧 **How to Customize**  
- Adjust the servo angles in `sketch.ino` to match your gate dimensions.  
- Add sensors (like IR) to detect vehicle presence.  
- Connect an LCD or LED indicators for status feedback.

📚 **Learning Focus**  
- Using the `ESP32Servo` library for servo control.  
- Creating interactive systems using buttons and motors.  
- Simulating real-world automation like toll gates or barriers.
