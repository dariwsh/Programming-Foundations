# 🚀 Course 11: OOP as it Should Be (Applications) — Practical C++ Projects

Welcome to the **OOP as it Should Be (Applications)** repository. This repository encapsulates comprehensive, real-world C++ Object-Oriented Programming projects and progressive milestones developed through the **ProgrammingAdvices** roadmap by **Dr. Mohammed Abu-Hadhoud**.

---

## 📌 Repository Overview

This repository demonstrates how to build robust, scalable, and modular software architectures in C++ using pure Object-Oriented Programming (OOP) paradigms, layered architecture patterns (Core, Libraries, UI Screens), generic programming with Templates, and secure data persistence.

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

## 🗺️ Course Syllabus & Implemented Projects

### 🛠️ Project 1: Utility Library (`clsUtil`)
- Comprehensive static utility class for generating random keys, matrices, encryption/decryption, date manipulation, array operations, and text formatting.
- 📂 *Folder:* [`Project 1 Utility Library`](./Project%201%20Utility%20Library)

### 🛡️ Project 2: Input & Validation Library (`clsInputValidate`)
- Type-safe, fail-proof console user input validation.
- Range checking for numbers, dates, strings, and cross-type boundaries using template methods.
- 📂 *Folder:* [`Project 2- Input and Validation Library`](./Project%202-%20Input%20and%20Validation%20Library)

---

### 🏦 Project 3: Full-Fledged Bank Management System
A comprehensive enterprise console application covering domain modeling, file persistence, transaction handling, role-based access control, and auditing.

#### 1. Core CRUD & Client Operations
- **Lesson #01:** Find Client (`clsBankClient::Find`) — [`Project 3.1 -Bank System - Find`](./Project%203.1%20-Bank%20System%20-%20Find)
- **Lesson #02:** Update Client — [`Project 3.2 -Bank System - update`](./Project%203.2%20-Bank%20System%20-%20update)
- **Lesson #03:** Add New Client — [`Project 3.3 -Bank System - update - Add New Client`](./Project%203.3%20-Bank%20System%20-%20update%20-%20Add%20New%20Client)
- **Lesson #04:** Delete Client — [`Project 3.4 -Bank System - Delete  Client`](./Project%203.4%20-Bank%20System%20-%20Delete%20%20Client)
- **Lesson #05:** List Clients Table View — [`Project 3.5 -Bank System - Clients List`](./Project%203.5%20-Bank%20System%20-%20Clients%20List)
- **Lesson #06:** Total Balances Calculation — [`Project 3.6-Bank System - Total Balances`](./Project%203.6-Bank%20System%20-%20Total%20Balances)

#### 2. UI Layer & Screens
- **Lesson #07:** Main Screen Hub (`clsMainScreen`) — [`Project 3.7 Bank System - UI - Main Menu`](./Project%203.7%20Bank%20System%20-%20UI%20-%20Main%20Menu)
- **Lesson #08:** List Clients Screen — [`Project 3.8 Bank System - List Clients Screen`](./Project%203.8%20Bank%20System%20-%20List%20Clients%20Screen)
- **Lesson #09:** Add New Client Screen — [`Project 3.9 Bank System -Add Clients`](./Project%203.9%20Bank%20System%20-%20Add%20Clients)
- **Lesson #10:** Delete Client Screen — [`Project 3.10 Bank System -Delete Clients`](./Project%203.10%20Bank%20System%20-Delete%20Clients)
- **Lesson #11:** Update Client Screen — [`Project 3.11 Bank System -Update Clients`](./Project%203.11%20Bank%20System%20-Update%20Clients)
- **Lesson #12:** Find Client Screen — [`Project 3.12 Bank System -Find Clients`](./Project%203.12%20Bank%20System%20-Find%20Clients)

#### 3. Financial Transactions Subsystem
- **Lesson #13:** Transactions Menu Screen (`clsTransactionsScreen`) — [`Project 3.13 Bank System - UI - Transactions Screen`](./Project%203.13%20Bank%20System%20-%20UI%20-%20Transactions%20Screen)
- **Lesson #14:** Deposit Screen (`clsDepositScreen`) — [`Project 3.14 Bank System - UI - Deposit Screen`](./Project%203.14%20Bank%20System%20-%20UI%20-%20Deposit%20Screen)
- **Lesson #15:** Withdraw Screen with Balance Guardrails (`clsWithdrawScreen`) — [`Project 3.15 Bank System - UI - Withdraw Screen -`](./Project%203.15%20Bank%20System%20-%20UI%20-%20Withdraw%20Screen%20-)
- **Lesson #16:** Total Balances Overview Screen (`clsTotalBalancesScreen`) — [`Project 3.16 Bank System - Total Balances Screen`](./Project%203.16%20Bank%20System%20-%20Total%20Balances%20Screen)

#### 4. User Management & Access Control Subsystem
- **Lesson #17:** Manage Users Menu Screen (`clsManageUsersScreen`) — [`Project 3.17 Bank System - Manage Users Screen`](./Project%203.17%20Bank%20System%20-%20Manage%20Users%20Screen)
- **Lesson #18:** Prepare User Domain Class (`clsUser`) — [`Project 3.18 Bank System - Prepare User Class`](./Project%203.18%20Bank%20System%20-%20Prepare%20User%20Class)
- **Lesson #19:** List Users Screen — [`Project 3.19 Bank System - LIst Users`](./Project%203.19%20Bank%20System%20-%20LIst%20Users)
- **Lesson #20:** Add New User Screen — [`Project 3.20 Bank System - Add New User Screen`](./Project%203.20%20Bank%20System%20-%20Add%20New%20User%20Screen)
- **Lesson #21:** Delete User Screen — [`Project 3.21 Bank System - Delete User Screen`](./Project%203.21%20Bank%20System%20-%20Delete%20User%20Screen)
- **Lesson #22:** Update User Screen — [`Project 3.22 Bank System - Update User Screen`](./Project%203.22%20Bank%20System%20-%20Update%20User%20Screen)
- **Lesson #23:** Find User Screen — [`Project 3.23 Bank System - Find User Screen`](./Project%203.23%20Bank%20System%20-%20Find%20User%20Screen)

#### 5. Authentication, Security & Permissions
- **Lesson #24:** Secure Login Engine (`clsLoginScreen`) — [`Project 3.24 - Login`](./Project%203.24%20-%20Login)
- **Lesson #25:** Logout Mechanism — [`Project 3.25 - logout`](./Project%203.25%20-%20logout)
- **Lesson #26:** Re-authenticate Loop (`Show Login Screen at Logout`) — [`Project 3.26 Show Login Screen at Logout`](./Project%203.26%20Show%20Login%20Screen%20at%20Logout)
- **Lesson #27:** Bitwise Permissions Engine & Access Verification (`CheckAccessRights`) — [`Project 3.27 Apply Permissions`](./Project%203.27%20Apply%20Permissions)
- **Lesson #28:** Add Date & Logged-in User Context to All Screens — [`Project 3.28 Add Date and Logged user`](./Project%203.28%20Add%20Date%20and%20Logged%20user)

#### 6. Bank System Advanced Extensions *(Integrated in Project 04)*
- 🔒 **Extension 01 & 02:** System lockout after 3 failed login attempts.
- 📜 **Extension 03, 04, 05:** Login Register logging system (`LoginRegister.txt`) and access-controlled viewing screen.
- 💸 **Extension 06, 07, 08:** Account-to-Account Balance Transfers (`clsTransferScreen`), audit logging (`TransferLog.txt`), and Transfer Log viewing.
- 🔐 **Extension 09:** File encryption/decryption keys for storing sensitive user credentials.
- 📐 **Extension 10:** Interface implementation and Abstract Classes (`clsScreen`, `clsPerson`).

---

### 💱 Project 4: Currency Exchange System & Architecture Refactoring
Consolidates the complete Bank System with a new **Currency Exchange Subsystem** and a modular filter architecture:

- **Currency Domain Model (`clsCurrency`):** Loading, searching (by Country Code or Currency Code), rate updating, and storage in `Currencies.txt`.
- **Currency Exchange Main Screen (`clsCurrencyExchangeMainScreen`):** Dedicated navigation menu.
- **Currencies List Screen (`clsCurrenciesListScreen`):** Formatted tabular view of all supported currencies.
- **Find Currency Screen (`clsFindCurrencyScreen`):** Search by code or country name.
- **Update Rate Screen (`clsUpdateCurrencyRateScreen`):** Real-time exchange rate modifications with immediate persistence.
- **Currency Calculator Screen (`clsCurrencyCalculatorScreen`):** Cross-currency conversions through USD base rates.
- 📂 *Folder:* [`Project 04 Currency Exchange`](./Project%2004%20Currency%20Exchange)

---

### 🧬 Generic Programming & Templates
- **Template Functions:** Generic swapping, maximum/minimum calculations, and generic array utilities.
- **Template Classes:** Type-agnostic data structures and calculations.
- 📂 *Folder:* [`Home Work  Template Classes`](./Home%20Work%20%20Template%20Classes)

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
