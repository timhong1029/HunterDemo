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

# HunterDemo

## 🧩 概要

**HunterDemo** 是一个使用 **Unreal Engine 5.6** 制作的第三人称战斗系统原型。  
当前阶段完全使用 **蓝图 (Blueprints)** 实现，  
主要用于展示 **Gameplay Programmer（游戏程序员）** 在角色控制、闪避机制、输入系统与模块化架构方面的设计与实现能力。

本项目的目标不是做一个完整游戏，而是构建一个**紧凑且可扩展的战斗循环**：  
移动 → 翻滚 → 攻击 → 命中反馈。  
未来会逐步加入 AI、连击系统、耐力管理等功能，  
让 Demo 既有可玩性，也能体现程序逻辑设计能力。

---

## ⚔️ 当前功能

- 纯蓝图实现，便于快速原型制作  
- 使用 **Enhanced Input** 输入系统（移动 / 视角 / 翻滚）  
- 翻滚系统：含动画蒙太奇与无敌帧逻辑  
- 模块化目录结构，逻辑与数据分离  
- 可在后期平滑过渡到 C++ 架构  

---

## 📁 项目结构

```
Content/0_Tim/
 ├── Characters/      # 玩家与敌人角色蓝图及动画逻辑
 ├── Components/      # 可复用组件（翻滚、战斗、体力等）
 ├── Systems/         # 全局系统（GameMode、Controller、战斗系统）
 ├── Input/           # Enhanced Input 输入映射与资产
 └── Data/            # 攻击数据、角色属性等 DataAsset
```

该结构遵循**模块化系统设计**思想，  
逻辑、数据与表现层严格分离，便于扩展和维护。

---

## 📦 仓库说明

> ⚠️ **重要说明**

由于 GitHub 存储空间有限，且 Unreal Engine 项目体积较大，  
本仓库仅包含**核心逻辑文件与轻量蓝图资产**：

- ✅ `Content/0_Tim/` — 主要蓝图、数据资产与系统逻辑  
- ✅ `Config/`、`Source/` — 项目配置与最小化 C++ 框架  
- ❌ **未包含**：动画、贴图、材质、音频等大文件  

仓库旨在展示项目的**架构与系统逻辑**，  
而非完整的资源或视觉效果。

---

## 🧠 开发说明

- 当前版本为 **纯蓝图实现**，方便快速迭代与原型测试。

