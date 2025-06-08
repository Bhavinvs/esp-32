# ESP32 16x2 LCD Display with LiquidCrystal_I2C

🖥️ **Project Description**  
This project demonstrates how to interface a 16x2 LCD display with the ESP32 using the LiquidCrystal_I2C library. It allows text to be printed to the LCD over I2C communication, reducing the number of required pins. This setup is perfect for learning display output with minimal wiring.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to display messages on the 16x2 LCD using I2C.  
- `diagram.json` – Circuit layout for ESP32 connected to a 16x2 LCD via I2C.  
- `libraries.txt` – Lists the external libraries used in this project.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432305769290680321)

No downloads required—just click the link, press the green "Start" button, and view the LCD displaying messages controlled by the ESP32.

🔧 **How to Customize**  
- Modify the text in `sketch.ino` to show your own messages.  
- Adjust the cursor position using `setCursor(col, row)` to change where text appears.  
- Change the I2C address if you're using a different LCD module.

📚 **Learning Focus**  
- Using the LiquidCrystal_I2C library with the ESP32.  
- Displaying text on a 16x2 LCD using I2C protocol.  
- Understanding how to communicate with I2C devices in embedded systems.
