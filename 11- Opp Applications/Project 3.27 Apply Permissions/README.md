# 🔐 Bank System — Lesson 27: Role-Based Access Control (RBAC)

> **Milestone:** Project 3: Bank System — Lesson #27 (Apply Permissions)  
> **Course:** [Course 11: OOP as it Should Be (Applications)](https://programmingadvices.com/courses/11-oop-as-it-should-be-applications)  
> **Instructor:** Dr. Mohammed Abu-Hadhoud (ProgrammingAdvices)

---

## 📖 Overview

Enforced granular bitwise permissions before executing any screen action, displaying an 'Access Denied' banner for unauthorized staff.

---

## 🎯 Key Concepts & Implementation Highlights

- Access Rights Enforcement via `clsScreen::CheckAccessRights(enPermissions)`
- Bitwise AND (`&`) evaluation between `CurrentUser.Permissions` and required permission
- Reusable 'Access Denied / Contact Admin' screen interceptor
- Robust application-wide security architecture

---

## 🗂️ Key Files & Architecture

- **Primary Classes / Headers:** `clsScreen.h`, `clsUser.h`, `Global.h`
- **Environment:** Visual Studio (C++ / MSVC)
- **Design Pattern:** Object-Oriented Architecture & Clean Separation of Concerns

---

## 🚀 How to Run

1. Open the solution or project file (`.sln` / `.vcxproj`) in **Visual Studio**.
2. Set the configuration to **Debug** or **Release** (x64 / x86).
3. Build and run the project (`Ctrl + F5` or `F5`).

---

السلام عليكم 🤍  
أنا بشارك رحلتي في تعلم البرمجة بشكل عملي  

يسعدني تتابعني 👇  
🔗 LinkedIn: https://www.linkedin.com/in/ahmed-darwish-33b752330/  
🌐 Portfolio: https://darwish.xo.je/  
💻 GitHub: https://github.com/dariwsh  

🚀 مستمر في التعلم والتطوير

