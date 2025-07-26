 # **🔧 Smart Fan Controller (Arduino)**
---------

_**An automatic temperature-based fan controller built using Arduino Uno, analog temperature sensor, and a relay. The fan turns on when room temperature exceeds a threshold (e.g., 30°C).**_
-------
**💡 Features**

Reads real-time temperature using analog sensor (e.g., LM35).
Turns on a fan (via relay module) when temperature > 30°C.
Simple, low-cost, and beginner-friendly embedded project.
------

**🛠 Tech Stack**

- Arduino Uno
- Analog Temperature Sensor (e.g., LM35)
- Relay Module
- C/C++ (Arduino IDE)

-------

**⚙️ Working Principle**


- The sensor outputs analog voltage proportional to temperature.
- Arduino reads this value and calculates temperature in °C.
- If temperature > 30°C, fan is turned ON using relay; else, it's OFF.

-------

**📦 Circuit Components**

Arduino Uno

- LM35 Temperature Sensor
- ↳ VCC → 5V
- ↳ GND → GND
- ↳ OUT → A0

- Relay Module
- ↳ IN → D5
- ↳ VCC → 5V
- ↳ GND → GND

- 12V Fan (connected via relay)

  External power source (if required for fan)

  ## 🧪 Live Simulation

  👉 [Click here to view the Tinkercad Circuit Simulation](https://www.tinkercad.com/things/f6zYJWpz6QH-smart-fan-control)
