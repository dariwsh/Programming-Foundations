CREATE TABLE Employees (
	EmployeeID INT PRIMARY KEY,
	FirstName VARCHAR(50),
	LastName VARCHAR(50),
	Email VARCHAR(100),
	HireDate DATE,
	Salary DECIMAL(10, 2)
);

INSERT INTO Employees 
VALUES 
--(1, 'Ahmed', 'Mohamed', 'asd@gmil.com', '2020-01-15', 50000.00),
(2, 'Sara',  'Ali',     'added@gmail.com', '2019-03-10', 60000.00),
(3, 'John',  'Doe',     'adfakl2@gmil.com', '2021-07-20', 55000.00);


INSERT INTO Employees
VALUES 
(6, 'Emily', 'Smith','adf@gmail.com', '2022-05-01', 62000.00)

delete from Employees where EmployeeID = 1;

SELECT * FROM Employees 
WHERE Salary >= 1000;