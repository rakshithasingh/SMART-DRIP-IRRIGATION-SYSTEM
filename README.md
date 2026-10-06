# SMART DRIP IRRIGATION SYSTEM

An Arduino UNO-based smart irrigation system that monitors soil moisture and automatically controls a water pump. It helps save water and reduce manual effort by providing plants with water only when needed.

\# 🌱 Automatic Smart Irrigation System using Arduino UNO



\## 📌 Project Overview



The Automatic Smart Irrigation System is an Arduino UNO-based project that automatically waters plants depending on the moisture level of the soil.



A soil moisture sensor measures the moisture content of the soil and sends the analog value to the Arduino UNO. The Arduino compares the sensor value with a predefined threshold.



\- If the soil is dry, the relay is activated and the water pump turns ON.

\- If the soil is sufficiently wet, the relay is turned OFF and the water pump stops.



An I2C LCD can display the moisture value, soil condition, and pump status.



\## 🎯 Objectives



\- Automatically water plants when the soil becomes dry.

\- Reduce unnecessary water consumption.

\- Monitor soil moisture continuously.

\- Control a water pump automatically.

\- Display system status using an LCD.

\- Develop a simple and low-cost smart agriculture system.



\## 🛠️ Components Required



\- Arduino UNO

\- Soil Moisture Sensor

\- 1-Channel Relay Module

\- 16×2 I2C LCD

\- DC Water Pump

\- External Power Supply for Pump

\- Jumper Wires

\- Breadboard

\- Water Pipe

\- USB Cable



\## 🔌 Pin Connections



\### Soil Moisture Sensor



| Sensor Pin | Arduino UNO |

|------------|-------------|

| VCC | 5V |

| GND | GND |

| AO | A0 |

| DO | Not Connected |



\### I2C LCD



| LCD Pin | Arduino UNO |

|---------|-------------|

| VCC | 5V |

| GND | GND |

| SDA | A4 |

| SCL | A5 |



\### Relay Module



| Relay Pin | Arduino UNO |

|-----------|-------------|

| VCC | 5V |

| GND | GND |

| IN | D7 |



\### Water Pump



The water pump is powered using a separate suitable power supply.



The relay is used as an electronic switch between the external power supply and the pump.



\*\*Do not connect the pump directly to the Arduino 5V pin.\*\*



\## ⚙️ Working Principle



The system works in the following sequence:



1\. The soil moisture sensor measures the moisture level.

2\. The sensor sends an analog signal to Arduino UNO through A0.

3\. Arduino reads the sensor value.

4\. The value is compared with a predefined threshold.

5\. If the soil is dry, the Arduino activates the relay.

6\. The relay switches ON the water pump.

7\. Water is supplied to the plant.

8\. When the soil becomes sufficiently wet, the Arduino switches OFF the relay.

9\. The water pump stops.

10\. The LCD displays the current soil condition and pump status.



\## 🔄 System Flow



```text

&#x20;       Soil

&#x20;         ↓

&#x20;Soil Moisture Sensor

&#x20;         ↓

&#x20;     Arduino UNO

&#x20;         ↓

&#x20;   Compare Threshold

&#x20;      ↙          ↘

&#x20;  DRY              WET

&#x20;   ↓                ↓

&#x20;Relay ON         Relay OFF

&#x20;   ↓                ↓

&#x20;Pump ON          Pump OFF

&#x20;   ↓                ↓

&#x20;Water Plant      Stop Watering

