# ESP32 Buzzer Control with a Single Switch

🔔 **Project Description**  
This project demonstrates how to control a buzzer using a single push button with the ESP32 microcontroller. The buzzer rings **only while the button is being pressed** and stops immediately when the button is released. This setup helps in understanding real-time response to digital inputs using ESP32.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to control the buzzer using a single switch.  
- `diagram.json` – Circuit layout for ESP32 with a push button and a buzzer.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/431750937548705793)

No installations needed—just open the link, press the green "Start" button, and press the switch to hear the buzzer in action.

🔧 **How to Customize**  
- Change the GPIO pins in `sketch.ino` to match your ESP32 setup.  
- Replace the buzzer with another output component like a motor or relay.  
- Use software debouncing to improve responsiveness in noisy environments.

📚 **Learning Focus**  
- Reading real-time input from a push button with ESP32.  
- Controlling an output device (buzzer) based on continuous button press.  
- Understanding momentary switch behavior vs toggle control.

