# Transmission Control Protocol (TCP)

Welcome to the lecture unit dedicated to **Transmission Control Protocol (TCP)**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **Transmission Control Protocol (TCP)**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**TCP** is a core, connection-oriented protocol of the Internet protocol suite operating at the Transport Layer. It guarantees reliable delivery of data packets.
*   **Connection-Oriented:** A connection is established prior to any data transmission.
*   **The 3-Way Handshake:**
    1.  *SYN (Synchronize):* Client requests connection.
    2.  *SYN-ACK (Synchronize-Acknowledge):* Server accepts and synchronizes parameters.
    3.  *ACK (Acknowledge):* Client acknowledges, and connection is established.
*   **Reliability Mechanisms:** Uses packet sequencing, flow control, acknowledgments (ACKs), and automatic retransmission of lost packets.

---

## 📝 Self-Assessment Quiz

### Questions
1. **Which of the following describes TCP?**
   * A) Connectionless and Unreliable
   * B) Connection-Oriented and Reliable
   * C) Connection-Oriented and Unreliable
   * D) Fast and lightweight but drops packets

2. **What is the correct sequence of messages in the TCP connection handshake?**
   * A) SYN, ACK, SYN-ACK
   * B) SYN, SYN-ACK, ACK
   * C) ACK, SYN, SYN-ACK
   * D) SYN, SYN, ACK

3. **How does TCP handle a packet that was lost during transmission?**
   * A) It skips the packet and moves to the next.
   * B) It aborts the entire connection.
   * C) It waits for a timeout and retransmits the lost packet.
   * D) It asks the user to restart the download.


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* TCP establishes a connection first and guarantees that all data arrives completely and in order.
2. **B)**
   * *Explanation:* The 3-way handshake sequence is SYN (from client) -> SYN-ACK (from server) -> ACK (from client).
3. **C)**
   * *Explanation:* TCP uses acknowledgment timers; if an ACK is not received for a packet, it is retransmitted.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./05- Transmission Control Protocol (TCP).pdf)
