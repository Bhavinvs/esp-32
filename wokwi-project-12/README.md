# ESP32 Relay Control with Two Switches

🔌 **Project Description**  
This project demonstrates how to control a relay module using two push buttons with the ESP32 microcontroller. One button turns the relay ON, and the other turns it OFF. This setup is ideal for understanding how to use digital inputs to switch high-power components through a relay.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to control the relay using two switches.  
- `diagram.json` – Circuit layout for ESP32 with a relay module and two push buttons.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432110423013660673)

No downloads required—just click the link, press the green "Start" button, and use the two buttons to turn the relay on or off.

🔧 **How to Customize**  
- Modify the GPIO pins in `sketch.ino` to match your hardware configuration.  
- Adjust the relay control logic depending on whether your relay is active HIGH or active LOW.  
- Add a load (like a lamp or motor) to the relay’s output side for practical applications.

📚 **Learning Focus**  
- Controlling a relay with the ESP32 using digital output.  
- Managing multiple digital inputs to control a single output.  
- Understanding real-world interfacing between low-power microcontrollers and high-power components.
