# C++ Quiz — Static Variables

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is a unique property of local static variables in C++?

<details>
<summary><b>Option A:</b> They are re-initialized every time the function is called.</summary>

❌ <b>Incorrect!</b> Local static variables are initialized only once.
</details>

<details>
<summary><b>Option B:</b> They retain their values between function calls and exist for the program's lifetime.</summary>

✅ <b>Correct!</b> Correct! A static local variable is initialized once, and retains its value even after the function scope exits.
</details>

<details>
<summary><b>Option C:</b> They can be accessed anywhere in the project.</summary>

❌ <b>Incorrect!</b> Static local variables have local scope; they can only be accessed within the function they are defined in.
</details>

<details>
<summary><b>Option D:</b> They are stored on the stack.</summary>

❌ <b>Incorrect!</b> Static variables are stored in the data segment (global/static memory), not the stack.
</details>

