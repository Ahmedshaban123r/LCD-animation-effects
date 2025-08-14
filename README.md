# AVR LCD Custom Characters & Animation

This project demonstrates how to use an **AVR microcontroller** to display **custom characters** (including Arabic letters) on a **16x2 LCD** and create animations such as loading bars and wave effects.

---

## 📌 Features
- Custom **Arabic letters** (Example: "شعبان").
- Custom symbols like a **smiley face** and **full block**.
- LCD **loading bar** animation.
- Support for simple **wave motion** between LCD lines.
- Written in **C** for AVR microcontrollers.

---

## 📂 Project Structure
📦 avr-lcd-custom-characters
┣ 📜 main.c # Main program logic
┣ 📜 LCD.c # LCD driver implementation
┣ 📜 LCD.h # LCD driver header file
┣ 📜 README.md # Documentation file
┗ 📜 Makefile # Optional build file

---

## 🖥️ Hardware Requirements
- **Microcontroller:** AVR (ATmega16 / ATmega32 / ATmega328P)
- **Display:** 16x2 character LCD with HD44780 controller
- **Connections:**
  - **Data pins:** PORTC (D4–D7)
  - **Control pins:** PORTA (RS = PA0, RW = PA1, E = PA2)
- 5V regulated power supply
- Potentiometer for LCD contrast control

---

## 📜 Example: Displaying "شعبان"
Custom Arabic letters are stored in **CGRAM** slots, then printed in order.

```c
LCD_create_char(0, sheen); // ش
LCD_create_char(1, ain);   // ع
LCD_create_char(2, baa);   // ب
LCD_create_char(3, alif);  // ا
LCD_create_char(4, nun);   // ن

LCD_command(0x01); // Clear screen

LCD_data(0); // ش
LCD_data(1); // ع
LCD_data(2); // ب
LCD_data(3); // ا
LCD_data(4); // ن
