USE Chapter3

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