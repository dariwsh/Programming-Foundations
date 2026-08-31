# HTTP & HTTPS Protocols

Welcome to the lecture unit dedicated to **HTTP & HTTPS Protocols**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **HTTP & HTTPS Protocols**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**HTTP (HyperText Transfer Protocol)** and **HTTPS (HTTP Secure)** are the core protocols of the Web.
*   **Request-Response Cycle:** Client sends an HTTP Request (headers, method like GET/POST) and Server returns an HTTP Response (status code like 200 OK, 404 Not Found, payload).
*   **HTTP (Port 80):** Data is transmitted in clear text, which is insecure.
*   **HTTPS (Port 443):** Wraps HTTP traffic in an encrypted **SSL/TLS** wrapper, securing:
    *   *Encryption:* Scrambles data to prevent sniffing.
    *   *Data Integrity:* Detects if data was altered.
    *   *Authentication:* Proves the server is who it claims to be using digital certificates.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What HTTP status code represents 'Page Not Found'?**
   * A) 200 OK
   * B) 301 Moved Permanently
   * C) 404 Not Found
   * D) 500 Internal Server Error

2. **Which port does HTTPS standardly use?**
   * A) Port 20
   * B) Port 80
   * C) Port 443
   * D) Port 8080

3. **What security benefits does HTTPS provide over HTTP?**
   * A) It makes websites load faster.
   * B) Encryption, Data Integrity, and Server Authentication.
   * C) It automatically backups database files.
   * D) It removes cookies from the browser.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **C)**
   * *Explanation:* 404 is the client-side error status code indicating the requested resource was not found on the server.
2. **C)**
   * *Explanation:* HTTPS traffic default port is 443. Plain HTTP is port 80.
3. **B)**
   * *Explanation:* HTTPS uses SSL/TLS to guarantee encryption (confidentiality), integrity (no tampering), and authentication (verified certificate).

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./20- Http-Https Protocols.pdf)
