# IP Part 4: DHCP

Welcome to the lecture unit dedicated to **IP Part 4: DHCP**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **IP Part 4: DHCP**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**DHCP (Dynamic Host Configuration Protocol)** is a network management protocol operating at the Application Layer. It automatically automates the configuration of devices on IP networks.
*   **Problem Solved:** Prevents manual configuration errors (like duplicate IP assignments) and saves administrative time.
*   **The DORA Process:**
    1.  *Discover:* Client broadcasts to find a DHCP server.
    2.  *Offer:* DHCP server offers an IP address lease.
    3.  *Request:* Client requests to lease that IP.
    4.  *Acknowledge:* Server confirms the lease and provides network settings (IP, subnet, gateway, DNS).

---

## 📝 Self-Assessment Quiz

### Questions
1. **What does DHCP stand for?**
   * A) Dynamic Host Configuration Protocol
   * B) Distributed Hardware Control Protocol
   * C) Dynamic Hypertext Connection Protocol
   * D) Direct Host Control Port

2. **What is the correct order of the DHCP allocation steps?**
   * A) Discover, Offer, Request, Acknowledge (DORA)
   * B) Direct, Open, Route, Access (DORA)
   * C) Discover, Open, Request, Acknowledge
   * D) Dynamic, Offer, Request, Acknowledge

3. **Which network settings does a DHCP server provide to a client?**
   * A) IP Address and Subnet Mask only
   * B) Default Gateway and DNS servers only
   * C) IP Address, Subnet Mask, Default Gateway, and DNS servers
   * D) MAC Address and SSID


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **A)**
   * *Explanation:* DHCP is the standard protocol for dynamically configuring hosts on an IP network.
2. **A)**
   * *Explanation:* The DORA steps represent Discover, Offer, Request, and Acknowledge.
3. **C)**
   * *Explanation:* DHCP provides all parameters required for a device to communicate fully on local and external networks.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./10- IP Part 4 (DHCP).pdf)
