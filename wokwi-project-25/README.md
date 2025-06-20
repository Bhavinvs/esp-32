# ESP32 Ultrasonic Distance Measurement using HC-SR04 (Serial Monitor Output)

📏 **Project Description**  
This project uses the HC-SR04 ultrasonic sensor with an ESP32 to measure the distance from an object. The ESP32 calculates the distance based on the time taken for ultrasonic pulses to bounce back from the object. The result is displayed in real-time on the **Serial Monitor**, making it useful for applications like obstacle detection or basic automation.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to calculate and print the distance.  
- `diagram.json` – Circuit layout showing ESP32 and HC-SR04 connections.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432839216025520129)

Move the virtual object to see live distance values printed in the Serial Monitor.

🔧 **How to Customize**  
- Update the pin numbers in `sketch.ino` to match your ESP32 board setup.  
- Modify the units (e.g., display in inches instead of cm).  
- Add thresholds or actions (e.g., buzzer alert if object is too close).

📚 **Learning Focus**  
- Interfacing ultrasonic sensors with ESP32.  
- Measuring and calculating distance using time-of-flight.  
- Displaying sensor data on the Serial Monitor for debugging or monitoring.
