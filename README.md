# University Advising System

A Java-based desktop application designed to streamline academic advising at a university. This system allows students, advisors, and administrators to coordinate course planning, schedule advising sessions, and monitor student progress.

## 🎯 Features

- **User Roles**  
  - **Student**: View academic record, request advising appointments, and receive course suggestions.  
  - **Advisor**: Manage assigned students, review course plans, and update advising notes.  
  - **Admin**: Oversee user accounts, assign advisors to students, and generate reports.

- **Appointment Scheduling**  
  - Students request time slots.  
  - Advisors approve or modify appointments.

- **Course Management**  
  - Course catalog with prerequisite enforcement.  
  - Semester-wise course planning for students.

- **Notifications**  
  - Alerts for upcoming advising sessions.

- **Data Persistence**  
  - Stores student profiles, sessions, and course plans using file-based or database storage.

## 🛠️ Tech Stack

| Component       | Technology Used         |
|----------------|--------------------------|
| Language        | Java (Swing / JavaFX)    |
| Storage         | File-based (`.bin` files) or MySQL (optional) |
| Email Alerts    | JavaMail API (optional)  |
| Build Tool      | IntelliJ IDEA or any Java IDE |

## 📁 Project Structure
University-Advising-System/

├── src/ # Source code files

│ ├── model/ # Entities: Student, Advisor, Course, etc.

│ ├── ui/ # GUI Forms and Frames

│ ├── service/ # Business logic

│ └── util/ # Helper classes for file I/O

├── data/ # Serialized data files (.bin)

├── resources/ # Images or config files

├── README.md

└── University-Advising-System.iml


## 🚀 Getting Started

### Prerequisites

- Java JDK 8 or later
- IntelliJ IDEA (or any Java IDE)

### Running the Project

1. Clone the repository:
   ```bash
   git clone https://github.com/hamzamagdy0/University-Advising-System.git

📝 License
This project is intended for educational use. Commercial use is not permitted without prior permission.
