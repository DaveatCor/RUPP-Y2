USE Year2

/*
CREATE TABLE Toys(
    ToyID INTEGER PRIMARY KEY,
    ToyName CHAR(20),
    Price MONEY,
    Description CHAR(30)
)*/


/*3.1.1 inserting records*/
-- INSERT INTO Toys
-- VALUES (1, 'ToyTrain1', 11.0, 'Red/blue battery'), 
-- (2, 'ToyTrain2', 11.0, 'Green/red/blue battery'),
-- (3, 'ElectricTrain', 15.00, 'Red/white AC/DC'),
-- (4, 'LivingDoll1', 12.00, 'Asian American'),
-- (5, 'LivingDoll2', 12.00, 'Asian American'),
-- (6, 'DollHouse', 17.00, 'Grand Town'),
-- (7, 'Doll/TownHouse', 15.00, 'Grand Town')

/* 3.1.1 Copying Records from One Table to an Existing Table */
-- CREATE TABLE ToysTest(
--     ToyID INTEGER CONSTRAINT ToyPK PRIMARY KEY,
--     ToyName CHAR(20) NOT NULL,
--     Price MONEY NOT NULL,
--     Description CHAR(40) NULL
-- )

-- INSERT INTO ToysTest
-- SELECT ToyID, ToyName, PRICE, Description
-- FROM Toys

-- /* 3.2 Updating records */ -- Use to update data inside Table
-- UPDATE ToysTest
-- SET Description = 'Doll Town' 
-- WHERE ToyID = 7


/* 3.2.2 Update a Record with a New Calculated Value */
-- UPDATE ToysTest
-- SET Price = Price + 5
-- WHERE ToyID = 1


-- 08/Apr/21

/* 3.2.3 Update Multiple Columns */
-- UPDATE ToysTest
-- SET ToyName = 'MyToy', Price = 15, Description = 'Blue'
-- WHERE ToyID = 1

/* 3.2.4 Update a Column that Contains a Date */

-- CREATE Table Sale(
--     SaleID INTEGER PRIMARY KEY,
--     ProductID CHAR (30) NOT NULL,
--     CommentID INTEGER NOT NULL,
--     DateSold DATETIME
-- )

-- INSERT INTO Sale
-- VALUES (2, 'CT200', 3, '2/5/2008')

-- UPDATE Sale
-- SET DateSold = '3/3/2008'
-- WHERE SaleID = 1


-- 08/Apr/21

/* 3.3 DELETING RECORDS */

-- DELETE FROM Sale
-- WHERE SaleID = 10 AND ProductID = 'BN200'

/* 3.4 SQL Transaction */
/* 3.4.1 COMMIT TRANSACTION */

-- CREATE TABLE Employee(
--     EmpID INTEGER PRIMARY KEY NOT NULL,
--     FirstName CHAR(20) NOT NULL,
--     LastName CHAR(20) NOT NULL,
--     Education CHAR(20) NOT NULL,
--     Occupation CHAR(20) NOT NULL,
--     YearlyIncome CHAR(20) NOT NULL,
--     Sales INTEGER NOT NULL
-- )

-- BEGIN TRANSACTION

-- -- INSERT INTO Employee
-- -- VALUES(5, 'SQL', 'SERVER', 'Education', 'Teaching', 10000, 200)

-- UPDATE Employee
-- SET [Education] = 'Tutorial', YearlyIncome = 10000
-- WHERE EmpID = 5 AND Sales =     300

-- COMMIT TRANSACTION

SELECT *
FROM Employee


