# File Transfer Protocol (FTP)

Welcome to the lecture unit dedicated to **File Transfer Protocol (FTP)**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **File Transfer Protocol (FTP)**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**FTP (File Transfer Protocol)** is a standard network protocol used to transfer files between a client and a server.
*   **Architecture:** Client-Server.
*   **Dual Channels:**
    *   *Control Connection (Port 21):* Sends commands (e.g., login, directory listing, transfer request).
    *   *Data Connection (Port 20 or random):* Transmits actual file packets.
*   **Connection Modes:**
    *   *Active Mode:* Client requests; Server initiates data connection. Often blocked by client firewalls.
    *   *Passive Mode:* Server provides a port; Client initiates data connection. More secure/firewall-friendly.

---

## 📝 Self-Assessment Quiz

### Questions
1. **Which port is used by default for the FTP Control connection?**
   * A) Port 20
   * B) Port 21
   * C) Port 22
   * D) Port 80

2. **What is the key difference between Active and Passive FTP modes?**
   * A) Active FTP encrypts data; Passive FTP does not.
   * B) In Active FTP, the server initiates the data connection; in Passive FTP, the client initiates the data connection.
   * C) Active FTP is wireless.
   * D) Passive FTP uses UDP instead of TCP.

3. **Why is SFTP/FTPS preferred over basic FTP today?**
   * A) Basic FTP is outdated and cannot transfer PDF files.
   * B) Basic FTP sends login credentials and data in plain text; SFTP/FTPS encrypts the transmission.
   * C) SFTP works without IP addresses.
   * D) FTPS uses fewer ports.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* FTP control commands (logins/navigation) use TCP port 21.
2. **B)**
   * *Explanation:* In active mode, the server opens connection back to client; in passive mode, the client initiates connection to server.
3. **B)**
   * *Explanation:* FTP transmits passwords and data in unencrypted text; secure alternatives (SFTP/FTPS) encrypt connections.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./25- FTP.pdf)
