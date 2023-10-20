
# Air Quality Monitoring System with ESP32

# Introduction

This project is an Air Quality Monitoring System built using the ESP32 microcontroller. It incorporates mesh communication between multiple nodes to relay air quality data. The final node sends this data to the internet, making it accessible through the Blynk IoT app. This README file provides an overview of the project, its features, and instructions on how to set it up.

# Features
- Mesh Communication: The project uses ESP32's built-in mesh networking capabilities to connect multiple nodes and create a wireless network for data communication.

- Air Quality Monitoring: It measures various air quality parameters, such as particulate matter (PM2.5 and PM10), temperature, humidity, and more, using appropriate sensors.

- Data Visualization: Data collected by the nodes is sent to the internet, making it accessible through the Blynk IoT app. This enables users to monitor air quality remotely.

- Alerting: Set threshold values for air quality parameters. When readings exceed these thresholds, the system can trigger alerts, notifying users of poor air quality.

- Scalable: The mesh network can be expanded by adding more nodes, providing broader coverage for air quality monitoring.

# Components
 - Here's a list of components used in this project:

- ESP32 Microcontrollers: ESP32 modules serve as nodes in the mesh network.

- Air Quality Sensors: Sensors capable of measuring air quality parameters like PM2.5 and PM10.

- Temperature and Humidity Sensors: To measure environmental conditions.

- Blynk IoT App: The Blynk app is used for data visualization and remote monitoring.

- Power Supply: Power source for the ESP32 modules.

- Internet Connection: Required for uploading data to the Blynk server.

# Setup
**Hardware Setup:**

- Connect air quality sensors, temperature, and humidity sensors to ESP32 modules.
- Power the modules and ensure they are within mesh network range.


**Software Setup:**

- Flash the ESP32 modules with appropriate firmware, enabling mesh networking.
Set up a Blynk account and create a project to receive data.
Configure the ESP32 modules to send data to the Blynk server using the Blynk API.

**Thresholds and Alerts:**

- Define air quality thresholds for triggering alerts.
- Set up alerting mechanisms, e.g., email or push notifications through the Blynk app.

**Deployment:**

Place the nodes in the desired locations for air quality monitoring.
Ensure they are connected to the mesh network and have access to the internet.
Usage
Monitoring: Access the Blynk app to monitor real-time air quality data from your nodes. Set up alert notifications to stay informed of air quality changes.

**Maintenance:** Regularly check the hardware and software components for any issues. Replace sensors as needed.

**Scaling:** Expand the mesh network by adding more nodes for broader air quality coverage.

**Data Analysis:** Over time, analyze the collected data to identify trends, pollution sources, and areas that require air quality improvement.
