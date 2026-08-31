# What an IP Address Reveals

Welcome to the lecture unit dedicated to **What an IP Address Reveals**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **What an IP Address Reveals**.

---

## 🏫 Lecture Notes (The Doctor's Way)

Your public IP address acts as a digital footprint whenever you interact with web resources.
*   **Metadata Exposed:**
    *   *Geographic Location:* Countries, cities, and approximate zip codes (not your exact home street address, but close enough).
    *   *ISP:* Your internet service provider name.
    *   *Device Metadata:* Combined with browser fingerprints, it can indicate operating systems, browsing patterns, and sessions.
*   **Privacy Implications:** Advertisers, websites, and malicious actors use IP addresses to build behavioral profiles, target ads, or restrict access based on country (geo-blocking).

---

## 📝 Self-Assessment Quiz

### Questions
1. **Which of the following can a website determine directly from your public IP address?**
   * A) Your exact physical house address and name.
   * B) Your credit card details.
   * C) Your approximate geographic location (city/country) and ISP.
   * D) Your computer's BIOS password.

2. **What is 'geo-blocking'?**
   * A) Blocking traffic from entering a physical server room.
   * B) Restricting access to internet content based on the user's geographical location determined by their IP.
   * C) Deleting local files on a computer.
   * D) Encrypting network cables.

3. **Can your internal private IP address (e.g., 192.168.1.5) be seen directly by public web servers on the internet?**
   * A) Yes, always.
   * B) No, because NAT replaces it with your router's public IP address before it leaves the local network.
   * C) Only if you use a cable connection.
   * D) Only in IPv6.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **C)**
   * *Explanation:* IP address geolocation lookup databases map public IP ranges to countries, cities, and ISP names.
2. **B)**
   * *Explanation:* Geo-blocking reads the incoming packet's source IP to block or allow access depending on geographic policies.
3. **B)**
   * *Explanation:* NAT replaces local private IP source headers with the router's public IP address, hiding local private IPs from external targets.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./16- What IP Address Reveals about us.pdf)
