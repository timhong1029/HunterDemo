# HunterDemo

## 🧩 Overview

**HunterDemo** is a third-person combat prototype built with **Unreal Engine 5.6**,  
created entirely in **Blueprints** at this stage.  
The project is designed to demonstrate **gameplay programming** skills, focusing on  
character control, dodge mechanics, input handling, and modular system design.

Rather than building a full game, the goal is to construct a **compact and polished combat loop** —  
movement → dodge → attack → hit feedback — serving as a foundation for future gameplay systems such as AI, combo chains, and stamina management.

---

## ⚔️ Current Features

- Blueprint-only implementation for fast prototyping  
- Enhanced Input system (Move / Look / Dodge)  
- Dodge mechanic with animation montage and i-frames  
- Modular directory and component-based logic  
- Ready for gradual C++ integration in later phases  

---

## 📁 Project Structure

```
Content/0_Tim/
 ├── Characters/      # Player & enemy blueprints, animation logic
 ├── Components/      # Reusable systems (Roll, Combat, Stamina, etc.)
 ├── Systems/         # GameMode, Controller, BattleSystem
 ├── Input/           # Enhanced Input assets and mappings
 └── Data/            # DataAssets for attacks, stats, and parameters
```

This structure follows a **modular system-oriented design**,  
separating logic, data, and presentation for scalability and clarity.

---

## 📦 Repository Notice

> ⚠️ **Important**

Due to GitHub storage limitations and Unreal Engine’s large asset sizes,  
this repository includes **only the core logic and lightweight assets**:

- ✅ `Content/0_Tim/` — core blueprints, data assets, and logic  
- ✅ `Config/`, `Source/` — project configuration and minimal C++ setup  
- ❌ excluded: animations, textures, materials, and audio files  

The focus here is to present **system architecture and gameplay logic**,  
not full production assets or visual fidelity.

---


## 🧠 Development Notes

- The project is currently **Blueprint-only**, ideal for iteration and prototyping.  
- Core gameplay systems (Roll, Combat, Stamina) are planned to be refactored into C++ later.  
- Architecture emphasizes **component-based design** for reusability and scalability.  
- The demo focuses on **combat feel and system clarity**, not artistic polish.

---

## 👤 Author

**Hong Chaoyu (洪超宇)**  
M1, Graduate School of Information Science and Technology, Osaka University  
Focus: Gameplay Programming / AI Systems / Technical Design  

GitHub: [https://github.com/timhong1029](https://github.com/timhong1029)

---

## 🧩 Future Plans

- Implement stamina & hit reaction systems  
- Introduce simple monster AI with perception and attack logic  
- Extend combo and weapon data system  
- Add combat camera assist and lock-on mechanics  

---

© 2025 Hong Chaoyu — *HunterDemo Project (Unreal Engine 5.6)*
