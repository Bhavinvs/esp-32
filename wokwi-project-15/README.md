# ESP32 20x4 LCD Display with LiquidCrystal_I2C

🖥️ **Project Description**  
This project demonstrates how to interface a 20x4 LCD display with the ESP32 using the LiquidCrystal_I2C library. It allows you to print multiple lines of text using I2C communication, making it efficient and pin-friendly. This setup is useful for applications that require more screen space compared to a 16x2 display.

📁 **Files in This Repository**  
- `sketch.ino` – Arduino code to display messages on the 20x4 LCD using I2C.  
- `diagram.json` – Circuit layout for ESP32 connected to a 20x4 LCD via I2C.  
- `libraries.txt` – Lists the external libraries used in this project.  
- `wokwi-project.txt` – Link to the Wokwi simulation for this project.

▶️ **Run the Simulation**  
You can simulate this project directly in your browser using Wokwi:

👉 [Click here to open the simulation](https://wokwi.com/projects/432307190438551553)

No downloads required—just click the link, press the green "Start" button, and view the 20x4 LCD displaying messages from the ESP32.

🔧 **How to Customize**  
- Modify the text and row/column positions in `sketch.ino` to suit your message layout.  
- Use `setCursor(col, row)` to control where each message appears.  
- Adjust the I2C address if you're using a different LCD module.

📚 **Learning Focus**  
- Displaying text on a 20x4 LCD using the ESP32 and I2C communication.  
- Using the LiquidCrystal_I2C library for multi-line LCD output.  
- Working with larger screen formats for more complex embedded applications.
