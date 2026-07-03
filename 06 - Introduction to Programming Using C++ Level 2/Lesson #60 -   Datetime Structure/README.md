# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Date & Time - tm Structure

# 📌 Overview
Learn how to query individual date and time fields using C++ standard `tm` structure elements.

---

# 🧠 Concepts Covered
- The `tm` structure fields
- `localtime()` to convert calendar time to structure pointer
- Adjusting fields (years since 1900, months index 0-11)

---

# 💡 Practical Details

```cpp
#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t t = time(0);
    tm* now = localtime(&t); // Convert to tm struct representing local time

    cout << "Year         : " << now->tm_year + 1900 << endl; // tm_year is years since 1900
    cout << "Month        : " << now->tm_mon + 1 << endl;    // tm_mon is index 0-11
    cout << "Day of Month : " << now->tm_mday << endl;       // 1-31
    cout << "Hour         : " << now->tm_hour << endl;
    cout << "Minute       : " << now->tm_min << endl;
    cout << "Second       : " << now->tm_sec << endl;
    cout << "Day of Week  : " << now->tm_wday << " (days since Sunday)" << endl;
    cout << "Day of Year  : " << now->tm_yday << " (days since Jan 1st)" << endl;

    return 0;
}
```

---

# 💡 Key Takeaways
- The `tm` structure divides time into components like seconds, minutes, hours, day, month, year.
- You MUST add `1900` to `tm_year` to get the calendar year.
- You MUST add `1` to `tm_mon` because months are 0-indexed (January is 0).

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.