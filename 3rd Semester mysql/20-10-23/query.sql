-- 1
CREATE TABLE
    student (
        id INT primary key,
        student_name VARCHAR(50),
        age INT,
        department VARCHAR(50)
    );

CREATE TABLE
    Library (
        book_id INT PRIMARY KEY,
        title VARCHAR(100),
        author VARCHAR(100),
        checkout_date DATE,
        return_date DATE,
        student_id INT,
        FOREIGN KEY (student_id) REFERENCES student (id)
    );

CREATE TABLE
    Fees (
        fee_id INT PRIMARY KEY,
        amount DECIMAL(10, 2),
        due_date DATE,
        student_id INT,
        FOREIGN KEY (student_id) REFERENCES student (id)
    );

-- 2.
CREATE TABLE
    student (
        id INT primary key,
        student_name VARCHAR(50) NOT NULL,
        age INT NOT NULL,
        department VARCHAR(50) NOT NULL
    );

CREATE TABLE
    Library (
        book_id INT PRIMARY KEY,
        title VARCHAR(100) NOT NULL,
        author VARCHAR(100) NOT NULL,
        checkout_date DATE NOT NULL,
        return_date DATE NOT NULL,
        student_id INT NOT NULL,
        FOREIGN KEY (student_id) REFERENCES student (id)
    );

CREATE TABLE
    Fees (
        fee_id INT PRIMARY KEY,
        amount DECIMAL(10, 2) NOT NULL,
        due_date DATE NOT NULL,
        student_id INT NOT NULL,
        FOREIGN KEY (student_id) REFERENCES student (id)
    );

-- 4.    In MySQL, Update and Delete query wasn’t executing, what was the reason and how to run those query? Write the code to enable the feature.
SET
    SQL_SAFE_UPDATES = 0;

-- do a update or delete operation
SET
    SQL_SAFE_UPDATES = 1;

-- 5.    Write a query to show the distinct department names
SELECT DISTINCT
    Department
FROM
    Employee;

--6.    Write a query to show the LastNames of the employees sorted by descending ages
SELECT
    LastName
FROM
    Employee
ORDER BY
    Age DESC;

--7.    Write a query to show the employee LastName whose age is greater than 30 and works in Marketing department.
SELECT
    LastName
FROM
    Employee
WHERE
    age > 30
    AND Department = 'Marketing';

--8.    Write a query to select all the employees
SELECT
    *
FROM
    Employee;

--9.    Write a query to get employees whose names includes ‘son’
SELECT
    *
FROM
    Employee
WHERE
    FirstName like '%son%'
    or LastName like '%son%';

--10.   Write a query to get the engineers
SELECT
    *
FROM
    Employee
WHERE
    Department = 'Engineering'