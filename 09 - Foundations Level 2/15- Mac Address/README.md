# MAC Address

Welcome to the lecture unit dedicated to **MAC Address**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **MAC Address**.

---

## 🏫 Lecture Notes (The Doctor's Way)

A **MAC (Media Access Control) Address** is the physical hardware identifier of a network interface card (NIC).
*   **Layer:** Operates at the Data Link Layer (Layer 2) of the OSI model.
*   **Format:** 48-bit (6 bytes) value written as 12 hexadecimal characters, grouped by colons or hyphens (e.g., `3C:D9:2B:A1:FE:80`).
*   **Components:**
    *   *OUI (Organizationally Unique Identifier):* The first 24 bits identify the manufacturer (assigned by IEEE).
    *   *NIC Specific:* The last 24 bits are uniquely assigned by the manufacturer to that physical unit.

---

## 📝 Self-Assessment Quiz

### Questions
1. **At which layer of the OSI model does a MAC Address operate?**
   * A) Layer 1 (Physical)
   * B) Layer 2 (Data Link)
   * C) Layer 3 (Network)
   * D) Layer 4 (Transport)

2. **How long is a standard MAC address?**
   * A) 32 bits
   * B) 48 bits
   * C) 64 bits
   * D) 128 bits

3. **What do the first 24 bits of a MAC address represent?**
   * A) The host identifier
   * B) The OUI (Organizationally Unique Identifier) identifying the manufacturer
   * C) The country code
   * D) The network speed limit


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* MAC addresses are used for frame delivery within the local link layer (Layer 2).
2. **B)**
   * *Explanation:* MAC addresses are 48 bits (6 bytes) long.
3. **B)**
   * *Explanation:* The first 3 bytes (24 bits) are the OUI, which indicates the hardware vendor.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./15- Mac Address.pdf)
