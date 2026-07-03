# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Date & Time - Local vs UTC Time

# 📌 Overview
Understand how to retrieve system time and convert it to readable local time or Coordinated Universal Time (UTC) formats.

---

# 🧠 Concepts Covered
- Using `time_t` and `time(0)` to retrieve calendar epoch time
- `ctime()` for local date-time conversions
- `gmtime()` and `asctime()` for UTC conversions

---

# 💡 Practical Details

```cpp
#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t t = time(0); // Get current calendar time
    
    char* dt = ctime(&t); // Convert time_t to local string
    cout << "Local Date and Time: " << dt;

    tm* gmtm = gmtime(&t); // Convert time_t to UTC tm structure
    char* UT = asctime(gmtm); // Convert tm to string format
    cout << "UTC Date and Time  : " << UT << endl;

    return 0;
}
```

---

# 💡 Key Takeaways
- `time(0)` returns the seconds elapsed since January 1, 1970 (Unix Epoch).
- `ctime` takes `time_t*` and formats local time.
- `gmtime` takes `time_t*` and returns a pointer to a `tm` structure representing UTC time.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.