# Subnet Mask & Subnetting

Welcome to the lecture unit dedicated to **Subnet Mask & Subnetting**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **Subnet Mask & Subnetting**.

---

## 🏫 Lecture Notes (The Doctor's Way)

A **Subnet Mask** is a 32-bit number that hides or covers the host portion of an IP address, leaving only the network portion visible to routers.
*   **Function:** It distinguishes the network address from the host address using bitwise AND operations.
*   **Notation:** Can be dotted-decimal (e.g., `255.255.255.0`) or CIDR slash notation (e.g., `/24`).
*   **Purpose:** Allows network administrators to split a large network block into smaller, more manageable sub-networks (subnets) to improve performance, organization, and security.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What does a Subnet Mask of 255.255.255.0 (/24) indicate?**
   * A) The first 24 bits represent the network, and the last 8 bits represent hosts.
   * B) The first 8 bits represent the network.
   * C) The address is an IPv6 address.
   * D) There can be up to 16 million hosts on the subnet.

2. **Which binary operation is used by a router to isolate the network ID from an IP address using the Subnet Mask?**
   * A) OR
   * B) XOR
   * C) NOT
   * D) AND

3. **Why do network administrators perform subnetting?**
   * A) To increase the overall physical speed of cables.
   * B) To partition a large network into smaller segments to control broadcast traffic and improve security.
   * C) To convert private IPs to public IPs.
   * D) To assign domain names.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **A)**
   * *Explanation:* 255.255.255.0 has three octets (24 bits) set to 1, indicating the network boundary, leaving 8 bits for host addresses (up to 254 usable hosts).
2. **D)**
   * *Explanation:* Routers perform a bitwise AND operation between the IP address and the Subnet Mask to extract the network ID.
3. **B)**
   * *Explanation:* Subnetting limits broadcast storms and divides departments/zones for security management.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./14- Subnet Mask.pdf)
