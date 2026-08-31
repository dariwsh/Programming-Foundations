# How Data is Transferred

Welcome to the lecture unit dedicated to **How Data is Transferred**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **How Data is Transferred**.

---

## 🏫 Lecture Notes (The Doctor's Way)

Data transfer across networks relies on breaking large streams of information down into manageable packets and transmitting them across dynamic routes.
*   **Packets:** Data units that contain a header (metadata like source and destination IP) and the payload (actual content).
*   **Packet Switching:** The network technology where packets are routed independently through the network. They can take different paths and arrive out of order, and are reassembled at the destination.
*   **Circuit Switching:** A contrasting traditional technology (used in voice telephone calls) where a dedicated physical path is established and kept open for the duration of the communication.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What are the two main components of a network data packet?**
   * A) Router and Switch
   * B) Header and Payload
   * C) IP and MAC
   * D) TCP and UDP

2. **Which switching technology allows packets to travel along different paths dynamically?**
   * A) Circuit Switching
   * B) Packet Switching
   * C) Port Switching
   * D) Hardware Switching

3. **What happens if packets arrive out of order at the destination in packet switching?**
   * A) The data is corrupted and discarded.
   * B) The receiver requests the entire file again.
   * C) The receiving device uses the packet sequence numbers in the headers to reassemble them correctly.
   * D) The network automatically shuts down.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* A packet contains a Header (control and routing info) and a Payload (the actual data being sent).
2. **B)**
   * *Explanation:* Packet switching routes each packet independently, allowing for efficient use of network resources.
3. **C)**
   * *Explanation:* Headers contain sequence numbers that allow the destination protocol stack (like TCP) to reorder the packets properly.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./04- How data is transfered.pdf)
