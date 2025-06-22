# ESP32 Weight Measurement using Load Cell and HX711

⚖️ **Project Description**  
This project uses a **load cell** with an **HX711 amplifier module** and the ESP32 microcontroller to measure weight. The output is read using the HX711 library and displayed in real-time on the **Serial Monitor**. It demonstrates how to build a simple digital weighing scale system.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to read and print weight data.  
- `diagram.json` – Circuit layout for ESP32, load cell, and HX711 module.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.  

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/433473860854474753)

Use the virtual weight slider in Wokwi to simulate placing weight on the load cell. The calculated weight will be shown in the Serial Monitor.

📦 **Library Used**  
This project uses the following Arduino library:

- `HX711` — used to interface with the HX711 24-bit ADC module.

You can install it via the Arduino Library Manager.

🔧 **How to Customize**  
- **Adjust the calibration factor** in `sketch.ino` to match your specific load cell setup.  
- **Replace the Serial Monitor** with an LCD/OLED display for real-time viewing.  
- **Trigger alerts or outputs** (like a buzzer or relay) when the weight crosses a threshold.

📚 **Learning Focus**  
- Reading weight using a load cell and HX711 amplifier.  
- Using libraries to manage analog-to-digital conversion.  
- Building simple digital measurement systems using ESP32.
