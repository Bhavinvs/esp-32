# ESP32 Ultrasonic Distance Measurement using HC-SR04

📏 **Project Description**  
This project demonstrates how to measure distance using an ultrasonic sensor (HC-SR04) and the ESP32 microcontroller. The sensor sends ultrasonic pulses and calculates the distance to the nearest object based on the time it takes for the echo to return. The measured distance is displayed in the **Serial Monitor** in real time.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read distance from the HC-SR04 and print it to the Serial Monitor.  
- `diagram.json` – Circuit layout for ESP32 and HC-SR04 sensor.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432839216025520129)

Once the simulation starts, move the virtual obstacle closer or farther to observe the changing distance in the Serial Monitor.

🔧 **How to Customize**  
- Adjust the trigger and echo pin numbers in `sketch.ino` to match your hardware setup.  
- Use an LCD or OLED display to show the distance visually.  
- Add logic to trigger actions (e.g., buzzer, LED) if distance goes below a set threshold.

📚 **Learning Focus**  
- Interfacing the HC-SR04 ultrasonic sensor with ESP32.  
- Using timing functions to measure distances accurately.  
- Displaying sensor data via the Serial Monitor.
