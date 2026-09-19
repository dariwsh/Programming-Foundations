# 🚀 Course 11: OOP as it Should Be (Applications) — Practical C++ Projects

Welcome to the **OOP as it Should Be (Applications)** repository. This repository encapsulates comprehensive, real-world C++ Object-Oriented Programming projects and progressive milestones developed through the **ProgrammingAdvices** roadmap by **Dr. Mohammed Abu-Hadhoud**.

---

## 📌 Repository Overview

This repository demonstrates how to build robust, scalable, and modular software architectures in C++ using pure Object-Oriented Programming (OOP) paradigms, layered architecture patterns (Core, Libraries, UI Screens), generic programming with Templates, and secure data persistence.

All project folders are organized and numbered sequentially (`01` through `32`) matching the exact course progression and syllabus.

> 💡 **Note on Project Directory Structure:**  
> Due to disk space management, some iterative lessons and extensions have been consolidated and built progressively across milestone folders, culminating in the comprehensive **Bank System** and **Currency Exchange System** architectures.

---

## 🏛️ Architectural Breakdown

The final applications adopt a clean multi-tier architecture:

```text
├── 📁 Core (Business Logic & Domain Models)
│     ├── clsPerson (Abstract Base)
│     ├── clsBankClient (Client Management & Financial Logic)
│     ├── clsUser (User & Permissions Engine)
│     └── clsCurrency (Currency Exchange & Rates Model)
│
├── 📁 Lib (Reusable Helper Libraries & Utilities)
│     ├── clsString (String Manipulation Engine)
│     ├── clsDate (Comprehensive DateTime & Calendar Engine)
│     ├── clsInputValidate (Robust Input & Range Validation)
│     └── clsUtil (Cryptography, Enums, Math & Formatting Helpers)
│
└── 📁 Screens (Presentation & UI Layer)
      ├── clsScreen (Base Screen with Headers & Access Gatekeeper)
      ├── clsMainScreen (Primary Navigation Hub)
      │
      ├── 📁 Client Screens (Transactions, Balances, Transfer Logs, CRUD)
      ├── 📁 User Screens (User Management, Access Control, Login Logs)
      └── 📁 Currency Screens (Currency List, Find, Rate Updates, Calculator)
```

---

## 🗺️ Course Syllabus & Sequenced Folders Roadmap

### 🛠️ Module 1: Reusable Libraries
- **`01`** — [`01 - Project 1 Utility Library`](./01%20-%20Project%201%20Utility%20Library): Utility Library (`clsUtil`). Static helper functions for random generation, encryption, matrices, and formatting.
- **`02`** — [`02 - Project 2 Input and Validation Library`](./02%20-%20Project%202%20Input%20and%20Validation%20Library): Input & Validation Library (`clsInputValidate`). Type-safe, fail-proof console user input validation.

---

### 🏦 Module 2: Full-Fledged Bank Management System

#### 1. Core CRUD & Client Logic
- **`03`** — [`03 - Project 3.1 Bank System - Find Client`](./03%20-%20Project%203.1%20Bank%20System%20-%20Find%20Client): Lesson #01 — Find Client (`clsBankClient::Find`).
- **`04`** — [`04 - Project 3.2 Bank System - Update Client`](./04%20-%20Project%203.2%20Bank%20System%20-%20Update%20Client): Lesson #02 — Update Client.
- **`05`** — [`05 - Project 3.3 Bank System - Add New Client`](./05%20-%20Project%203.3%20Bank%20System%20-%20Add%20New%20Client): Lesson #03 — Add New Client & duplicate check.
- **`06`** — [`06 - Project 3.4 Bank System - Delete Client`](./06%20-%20Project%203.4%20Bank%20System%20-%20Delete%20Client): Lesson #04 — Delete Client & file synchronization.
- **`07`** — [`07 - Project 3.5 Bank System - List Clients`](./07%20-%20Project%203.5%20Bank%20System%20-%20List%20Clients): Lesson #05 — List Clients Table View.
- **`08`** — [`08 - Project 3.6 Bank System - Total Balances`](./08%20-%20Project%203.6%20Bank%20System%20-%20Total%20Balances): Lesson #06 — Total Balances calculation.

#### 2. Presentation Layer & UI Screens
- **`09`** — [`09 - Project 3.7 Bank System - Main Screen`](./09%20-%20Project%203.7%20Bank%20System%20-%20Main%20Screen): Lesson #07 — Main Screen Hub (`clsMainScreen` & `clsScreen`).
- **`10`** — [`10 - Project 3.8 Bank System - List Clients Screen`](./10%20-%20Project%203.8%20Bank%20System%20-%20List%20Clients%20Screen): Lesson #08 — List Clients Screen.
- **`11`** — [`11 - Project 3.9 Bank System - Add Clients Screen`](./11%20-%20Project%203.9%20Bank%20System%20-%20Add%20Clients%20Screen): Lesson #09 — Add New Client Screen.
- **`12`** — [`12 - Project 3.10 Bank System - Delete Clients Screen`](./12%20-%20Project%203.10%20Bank%20System%20-%20Delete%20Clients%20Screen): Lesson #10 — Delete Client Screen.
- **`13`** — [`13 - Project 3.11 Bank System - Update Clients Screen`](./13%20-%20Project%203.11%20Bank%20System%20-%20Update%20Clients%20Screen): Lesson #11 — Update Client Screen.
- **`14`** — [`14 - Project 3.12 Bank System - Find Clients Screen`](./14%20-%20Project%203.12%20Bank%20System%20-%20Find%20Clients%20Screen): Lesson #12 — Find Client Screen.

#### 3. Financial Transactions Subsystem
- **`15`** — [`15 - Project 3.13 Bank System - Transactions Screen`](./15%20-%20Project%203.13%20Bank%20System%20-%20Transactions%20Screen): Lesson #13 — Transactions Menu Screen (`clsTransactionsScreen`).
- **`16`** — [`16 - Project 3.14 Bank System - Deposit Screen`](./16%20-%20Project%203.14%20Bank%20System%20-%20Deposit%20Screen): Lesson #14 — Deposit Screen (`clsDepositScreen`).
- **`17`** — [`17 - Project 3.15 Bank System - Withdraw Screen`](./17%20-%20Project%203.15%20Bank%20System%20-%20Withdraw%20Screen): Lesson #15 — Withdraw Screen (`clsWithdrawScreen`).
- **`18`** — [`18 - Project 3.16 Bank System - Total Balances Screen`](./18%20-%20Project%203.16%20Bank%20System%20-%20Total%20Balances%20Screen): Lesson #16 — Total Balances Screen (`clsTotalBalancesScreen`).

#### 4. User Management & Permissions Subsystem
- **`19`** — [`19 - Project 3.17 Bank System - Manage Users Screen`](./19%20-%20Project%203.17%20Bank%20System%20-%20Manage%20Users%20Screen): Lesson #17 — Manage Users Menu Screen.
- **`20`** — [`20 - Project 3.18 Bank System - Prepare User Class`](./20%20-%20Project%203.18%20Bank%20System%20-%20Prepare%20User%20Class): Lesson #18 — Prepare User Domain Class (`clsUser`).
- **`21`** — [`21 - Project 3.19 Bank System - List Users Screen`](./21%20-%20Project%203.19%20Bank%20System%20-%20List%20Users%20Screen): Lesson #19 — List Users Screen.
- **`22`** — [`22 - Project 3.20 Bank System - Add New User Screen`](./22%20-%20Project%203.20%20Bank%20System%20-%20Add%20New%20User%20Screen): Lesson #20 — Add New User Screen.
- **`23`** — [`23 - Project 3.21 Bank System - Delete User Screen`](./23%20-%20Project%203.21%20Bank%20System%20-%20Delete%20User%20Screen): Lesson #21 — Delete User Screen.
- **`24`** — [`24 - Project 3.22 Bank System - Update User Screen`](./24%20-%20Project%203.22%20Bank%20System%20-%20Update%20User%20Screen): Lesson #22 — Update User Screen.
- **`25`** — [`25 - Project 3.23 Bank System - Find User Screen`](./25%20-%20Project%203.23%20Bank%20System%20-%20Find%20User%20Screen): Lesson #23 — Find User Screen.

#### 5. Authentication, Security & Permissions
- **`26`** — [`26 - Project 3.24 Bank System - Login`](./26%20-%20Project%203.24%20Bank%20System%20-%20Login): Lesson #24 — Secure Login Engine (`clsLoginScreen`).
- **`27`** — [`27 - Project 3.25 Bank System - Logout`](./27%20-%20Project%203.25%20Bank%20System%20-%20Logout): Lesson #25 — Logout Mechanism.
- **`28`** — [`28 - Project 3.26 Bank System - Show Login Screen at Logout`](./28%20-%20Project%203.26%20Bank%20System%20-%20Show%20Login%20Screen%20at%20Logout): Lesson #26 — Infinite Login Loop Architecture.
- **`29`** — [`29 - Project 3.27 Bank System - Apply Permissions`](./29%20-%20Project%203.27%20Bank%20System%20-%20Apply%20Permissions): Lesson #27 — Bitwise Permissions Engine & Access Verification (`CheckAccessRights`).
- **`30`** — [`30 - Project 3.28 Bank System - Add Date and Logged User`](./30%20-%20Project%203.28%20Bank%20System%20-%20Add%20Date%20and%20Logged%20User): Lesson #28 — Add Date & Logged-in User Context to All Screens.

---

### 🧬 Module 3: Generic Programming
- **`31`** — [`31 - Template Functions and Classes`](./31%20-%20Template%20Functions%20and%20Classes): Generic programming with Function & Class Templates.

---

### 💱 Module 4: Currency Exchange System & File Refactoring
- **`32`** — [`32 - Project 04 Currency Exchange & Organize Classes`](./32%20-%20Project%2004%20Currency%20Exchange%20%26%20Organize%20Classes): Master project consolidating the complete Bank System with Currency Exchange, Transfer Logs, Login Registries, Lockout Protection, Credential Encryption, and Visual Studio Clean Filter Architecture.

---

## 💻 Tech Stack & Key Concepts Applied

- **Language:** Modern C++ (C++11/17/20)
- **Paradigm:** Pure Object-Oriented Programming (OOP)
- **Key Principles:**
  - Encapsulation, Data Hiding, Getters/Setters, Read-Only Properties.
  - Inheritance hierarchies (`clsPerson` $\rightarrow$ `clsBankClient`, `clsUser` and `clsScreen` $\rightarrow$ Derived Screens).
  - Polymorphism & Virtual Functions / Abstract Classes (`Pure Virtual`).
  - Bitwise operators for granular role-based permissions (`enum enPermissions`).
  - Separation of Concerns (Presentation Layer vs. Business Logic vs. Data Storage Layer).
  - Generic programming with Templates.
  - Safe file I/O operations (`fstream`, parsing records, delimiter handling).

---

السلام عليكم 🤍  
أنا بشارك رحلتي في تعلم البرمجة بشكل عملي  

يسعدني تتابعني 👇  
🔗 LinkedIn: https://www.linkedin.com/in/ahmed-darwish-33b752330/  
🌐 Portfolio: https://darwish.xo.je/  
💻 GitHub: https://github.com/dariwsh  

🚀 مستمر في التعلم والتطوير
