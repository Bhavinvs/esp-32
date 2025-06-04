# ESP32 Potentiometer Reading via Serial Monitor (Project 9)

## 🚦 Project Description

This project demonstrates how to read analog input from a potentiometer using the `analogRead()` function on the ESP32 microcontroller. The potentiometer values are continuously displayed in the Serial Monitor, allowing real-time observation of changes in voltage input.

## 📁 Files in This Repository

- `sketch.ino` – Arduino code that reads and prints potentiometer values.
- `diagram.json` – Circuit layout for ESP32 and potentiometer setup.
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

## ▶️ Run the Simulation

You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432198713190003713)

No downloads required—just click the link, press the green "Start" button, and view the potentiometer values in the Serial Monitor.

## 🔧 How to Customize

- Change the analog pin in `sketch.ino` to suit your circuit.
- Modify the printing interval using `delay()` to update values faster or slower.
- Map the analog values to control other components like LEDs or servos.

## 📚 Learning Focus

- Using `analogRead()` to get analog input values.
- Displaying real-time sensor data in the Serial Monitor.
- Understanding how analog-to-digital conversion works on the ESP32.

