# Ports and Sockets

Welcome to the lecture unit dedicated to **Ports and Sockets**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **Ports and Sockets**.

---

## 🏫 Lecture Notes (The Doctor's Way)

To allow multiple applications to communicate over a single network card, we use Ports and Sockets:
*   **Port (Software Address):** A 16-bit number (0 to 65535) that specifies which application or process on a computer should receive the network packets.
    *   *Well-known Ports:* 80 (HTTP), 443 (HTTPS), 21 (FTP), 22 (SSH).
*   **Socket:** The programming endpoint. It is the combination of an IP Address and a Port Number (e.g., `192.168.1.100:443`). It defines one side of a bidirectional channel.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What is the range of port numbers in computer networking?**
   * A) 0 to 255
   * B) 0 to 1023
   * C) 0 to 65535
   * D) 0 to 4294967295

2. **Which port is standard for secure web traffic (HTTPS)?**
   * A) Port 21
   * B) Port 80
   * C) Port 443
   * D) Port 8080

3. **If the IP is 10.0.0.5 and the application runs on port 8080, what is the socket representation?**
   * A) 10.0.0.5-8080
   * B) 10.0.0.5:8080
   * C) 10.0.0.5/8080
   * D) 8080@10.0.0.5


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **C)**
   * *Explanation:* Port numbers are represented by a 16-bit unsigned integer, giving a range of 0 to 65535.
2. **C)**
   * *Explanation:* Port 443 is reserved for HTTP Secure (HTTPS) traffic.
3. **B)**
   * *Explanation:* A socket is represented by appending the port to the IP address with a colon.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./13- What is port - Socket.pdf)
