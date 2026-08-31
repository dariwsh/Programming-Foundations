# NAT and IP Mapping

Welcome to the lecture unit dedicated to **NAT and IP Mapping**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **NAT and IP Mapping**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**NAT (Network Address Translation)** is a method of mapping local private IP addresses to a public IP address before transferring packets to the public internet.
*   **Port Address Translation (PAT):** The most common type of NAT. It tracks connections by assigning temporary source port numbers to distinguish between different internal hosts using the same public IP.
*   **Benefits:**
    *   *Saves IPv4 space:* Thousands of local devices can access the internet using a single public IP.
    *   *Security:* Hides internal IP addresses from the public internet, acting as a firewall barrier.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What is the primary motivation behind the widespread use of NAT?**
   * A) To encrypt internet traffic.
   * B) To conserve the limited pool of public IPv4 addresses.
   * C) To replace DNS servers.
   * D) To increase the length of MAC addresses.

2. **How does Port Address Translation (PAT) distinguish traffic for different local devices?**
   * A) By assigning unique MAC addresses.
   * B) By using unique port numbers in the translation table.
   * C) By converting IPv4 to IPv6.
   * D) By blocking duplicate domains.

3. **True or False: NAT is necessary for devices that have native, direct IPv6 addresses.**
   * A) True
   * B) False


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* NAT allows private networks to share one or a few public IPs, drastically reducing the demand for new public IPv4 blocks.
2. **B)**
   * *Explanation:* PAT maps private IPs + ports to a single public IP + unique public-facing ports to track requests.
3. **B)**
   * *Explanation:* IPv6 has enough addresses for every device to have a globally unique public IP, making NAT unnecessary.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./11- IP Address Part 4 (NAT and IP Mapping).pdf)
