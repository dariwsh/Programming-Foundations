# What is DNS?

Welcome to the lecture unit dedicated to **What is DNS?**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **What is DNS?**.

---

## 🏫 Lecture Notes (The Doctor's Way)

The **DNS (Domain Name System)** translates human-readable domain names into machine-readable IP addresses.
*   **The Lookup Steps:**
    1.  *Resolver (ISP):* Receives client query.
    2.  *Root Server:* Points to TLD server.
    3.  *TLD Server:* Points to Authoritative Nameserver.
    4.  *Authoritative Nameserver:* Returns actual IP matching the domain record.
*   **DNS Caching:** To speed up lookups, operating systems, browsers, and routers save resolved DNS queries locally for a period defined by the **TTL (Time to Live)** parameter.

---

## 📝 Self-Assessment Quiz

### Questions
1. **Why is DNS referred to as the 'phonebook of the Internet'?**
   * A) It lists the phone numbers of network engineers.
   * B) It translates hostnames like google.com to IP addresses.
   * C) It records internet usage fees.
   * D) It dials connections between computers.

2. **What does TTL (Time to Live) in a DNS record indicate?**
   * A) The speed of the DNS server.
   * B) How long a DNS record should be cached before checking for updates.
   * C) The lifespan of the domain.
   * D) The packet ping response time.

3. **Which server holds the definitive mapping records for a specific domain name?**
   * A) Root Server
   * B) TLD Server
   * C) Authoritative DNS Server
   * D) Recursive Resolver


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* Like mapping names to phone numbers, DNS maps names to IP addresses.
2. **B)**
   * *Explanation:* TTL tells resolvers how many seconds to cache a record before querying the server again.
3. **C)**
   * *Explanation:* The Authoritative DNS Server is the final authority holding the actual database records.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./22- What is DNS.pdf)
