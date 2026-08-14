# USERS MANAGER

[![GitHub issues](https://img.shields.io/github/issues/red1gr/users_manager?style=for-the-badge&logo=github&logoColor=white)](https://github.com/red1gr/users_manager/issues)
[![GitHub license](https://img.shields.io/github/license/red1gr/users_manager?style=for-the-badge&logo=apache&logoColor=white)](LICENSE)

## OVERVIEW
Users Manager is a C-based command-line application designed to manage user records. By utilizing a menu-driven interface and local file storage, the project provides a structured way to handle user data, making it a practical implementation of file I/O and modular programming in C.

## FEATURES
- **Menu-Driven Interface:** A centralized system to navigate application options and handle user choices.
- **User Management:** Dedicated modules for creating and managing user-related data and logic.
- **Data Persistence:** Integration with a local text file to ensure user information is stored and retrieved consistently.
- **Utility Toolset:** A collection of general-purpose utilities and mathematical tools to support core application functionality.

## TECH STACK
[![C](https://img.shields.io/badge/C-11-00599C.svg?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)

### INSTALLATION
1. **Clone the Repository**
    - Download the source code to your local machine.
    ```bash
    git clone https://github.com/red1gr/users_manager.git
    cd "c program"
    ```
2. **Compile the Source**
    - Use a C compiler such as GCC to compile all the project modules.
    ```bash
    gcc main.c menu.c user.c utils.c math_tools.c -o users_manager
    ```
3. **Run the Application**
    - Execute the resulting binary to start the manager.
    ```bash
    ./users_manager
    ```

## PROJECT STRUCTURE
```
c program/
├── data/
│   └── users.txt            # Storage for user records
├── main.c                   # Entry point and main execution loop
├── math_tools.c             # Implementation of mathematical helper functions
├── math_tools.h             # Declarations for mathematical helper functions
├── menu.c                   # Logic for displaying and handling the user menu
├── menu.h                   # Declarations for the menu system
├── user.c                   # Core user management logic
├── user.h                   # Declarations for user management
├── utils.c                  # General purpose utility functions
└── utils.h                  # Declarations for general purpose utilities
```

## CONTRIBUTING
- WE WELCOME CONTRIBUTIONS! IF YOU HAVE SUGGESTIONS FOR IMPROVEMENTS, FEATURE REQUESTS, OR BUG REPORTS, PLEASE OPEN AN ISSUE OR SUBMIT A PULL REQUEST ON OUR GITHUB REPOSITORY.

## LICENSE
THIS PROJECT IS LICENSED UNDER THE [APACHE-2.0](LICENSE) - SEE THE [LICENSE](LICENSE) FILE FOR DETAILS.

## SUPPORT & CONTACT
- ISSUES: [GITHUB ISSUES](https://github.com/red1gr/users_manager/issues)
- CONTACT: [SUPPORT CONTACT](mailto:mail@red1gr.dev)