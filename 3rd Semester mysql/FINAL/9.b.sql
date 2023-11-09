CREATE database temp;

use temp;

CREATE TABLE
    Department (
        DepartmentID INT AUTO_INCREMENT PRIMARY KEY,
        DepartmentName VARCHAR(255) NOT NULL,
        Location VARCHAR(255) NOT NULL
    );

CREATE TABLE
    Employee (
        EmployeeID INT AUTO_INCREMENT PRIMARY KEY,
        FirstName VARCHAR(255) NOT NULL,
        LastName VARCHAR(255) NOT NULL,
        Email VARCHAR(255) UNIQUE NOT NULL,
        Salary DECIMAL(10, 2) NOT NULL,
        DepartmentID INT,
        FOREIGN KEY (DepartmentID) REFERENCES Department (DepartmentID) ON DELETE SET NULL
    );

CREATE TABLE
    JobHistory (
        HistoryID INT AUTO_INCREMENT PRIMARY KEY,
        EmployeeID INT,
        StartDate DATE NOT NULL,
        EndDate DATE,
        JobTitle VARCHAR(255) NOT NULL,
        DepartmentID INT,
        FOREIGN KEY (EmployeeID) REFERENCES Employee (EmployeeID),
        FOREIGN KEY (DepartmentID) REFERENCES Department (DepartmentID)
    );