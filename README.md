# 🌙 Arduino Light-Dependent LED Control

This project demonstrates how to use an **LDR (Light Dependent Resistor)** with an **Arduino UNO** to automatically turn on an LED when it gets dark (simulating night conditions) and turn it off during daylight.

---

## 📌 Project Overview
- **Objective:** Detect light intensity using an LDR and control an LED accordingly.
- **Functionality:**
  - When light intensity is **high** (daytime), the LED remains **OFF**.
  - When light intensity is **low** (nighttime), the LED turns **ON**.

---

## 🔍 How It Works
- The **LDR** senses ambient light.
- Arduino reads the **analog value** from the LDR.
- If the value falls below a threshold (dark condition), the **LED is turned ON**, else OFF.

---

## 🛠️ Components Used
- Arduino UNO
- LDR (Light Dependent Resistor)
- 10kΩ resistor
- LED
- 220Ω resistor
- Breadboard & Jumper wires
- 5V power supply

---

## 🔗 Circuit Diagram

### With External Source of Light
![With External Source of Light](WITH%20EXTERNAL%20SOURCE%20OF%20LIGHT.png)

### Without External Source of Light
![Without External Source of Light](WITHOUT%20EXTERNAL%20SOURCE%20OF%20LIGHT.png)


---

## 🖥 Arduino Code
See the [LDR_LED_Control.ino](ldr.ino) file in this repository.

---

## ⚙ How to Run
1. Connect components as per the circuit diagram.
2. Upload `ldr.ino` to Arduino using Arduino IDE.
3. Open Serial Monitor (9600 baud) to see LDR readings.
4. Cover/uncover the LDR to simulate night/day and observe LED behavior.

---

## ✅ Features
✔ Automatic LED control based on light  
✔ Adjustable threshold  
✔ Simple and low-cost  

