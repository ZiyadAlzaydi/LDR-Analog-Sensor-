# LDR-Analog-Sensor
This Arduino-based project demonstrates how to use an LDR (Light Dependent Resistor) to control an LED based on ambient light levels. The LDR acts as an analog light sensor whose resistance changes with light intensity. This change is read by the Arduino through an analog input pin, which is then used to control an LED.

<img width="875" height="741" alt="2025-07-18 (2)" src="https://github.com/user-attachments/assets/cbb4344d-c409-4ef9-bd17-265d71214d9d" />

How It Works:

LDR & Voltage Divider:

The LDR is part of a voltage divider circuit with a fixed resistor (typically 10kΩ).

As light intensity changes, the resistance of the LDR changes, altering the voltage at the analog input (A0).

Analog Reading:

The Arduino reads the voltage from the divider circuit using analogRead(A0).

The reading ranges from 0 (dark) to 1023 (bright).

LED Control Logic:

When the light level falls below a predefined threshold (e.g., in darkness), the LED turns ON.

When the light level rises above the threshold (e.g., in daylight), the LED turns OFF.

Components Used:

Arduino Uno R3

Breadboard

LDR (Light Dependent Resistor)

10kΩ Resistor (for voltage divider)

Red LED

220Ω Resistor (for LED current limiting)

Jumper wires

USB cable for power/programming

Connection Summary:

Component	Connection

LDR	One leg to 5V, the other to A0 and 10kΩ resistor to GND

LED	Anode to digital pin 13 (via 220Ω resistor), cathode to GND

Arduino GND	Connected to breadboard ground rail

Arduino 5V	Connected to breadboard positive rail

Use Case:

This project simulates an automatic night lamp:

LED turns on when it gets dark (at night).

LED turns off in bright light (during the day).
