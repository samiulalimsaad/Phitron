DROP TABLE Employee;

DROP TABLE Department;

CREATE database IF NOT EXISTS mid_exam;

use mid_exam;

CREATE table
    Department (
        department_id INT AUTO_INCREMENT,
        department_name VARCHAR(50) NOT NULL,
        PRIMARY key (department_id)
    );

DESCRIBE Department;

CREATE table
    Employee (
        employee_id INT AUTO_INCREMENT,
        first_name VARCHAR(50) NOT NULL,
        last_name VARCHAR(50) NOT NULL,
        date_of_birth DATE NOT NULL,
        department_id INT NOT NULL,
        salary DECIMAL(5, 2) NOT NULL,
        PRIMARY key (employee_id),
        FOREIGN KEY (department_id) REFERENCES Department (department_id)
    );

DESCRIBE Employee;