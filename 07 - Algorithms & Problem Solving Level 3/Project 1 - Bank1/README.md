# 🏦 Project 1: Bank System (Version 1)

A C++ console application implementing a **simple Bank Account Management System**.

---

## 📋 Features

- **Show Client List:** Displays all registered bank clients in a formatted ASCII table.
- **Add New Client:** Prompts for account details (Account Number, Pin Code, Name, Phone, and Balance) and appends them to the clients file.
- **Delete Client:** Searches for a client by account number, prompts for deletion confirmation, and removes them from the file.
- **Update Client Info:** Allows updating Pin Code, Name, Phone, and Account Balance.
- **Find Client:** Searches for a client and prints their detailed card.
- **Exit:** Exits the application.

---

## 💡 Key Concepts

- **File Streams (`std::fstream` for reading/writing client records)**
- **Console UI design with formatted tables (`std::setw`)**
- **Data Serialization & Deserialization using separators (`#//#`)**
- **Structured data manipulation using standard library `std::vector`**

---

## 🚀 How to Run

1. Open the project solution file `Project 1 - Bank1.slnx` (or `.vcxproj`) in Visual Studio.
2. Compile and run the application.
3. The client records will be saved to and loaded from `Clients.txt` in the same directory.
