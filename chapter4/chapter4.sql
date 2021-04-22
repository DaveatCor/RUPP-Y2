USE Year2

-- 4.1 the select statement
-- SELECT ToyName, Price
-- FROM Toys

-- 4.2 COMPUTED COLUMNS

-- CREATE TABLE Committee2(
--     CommitteeID INTEGER PRIMARY KEY NOT NULL,
--     Firstname CHAR(20) NOT NULL,
--     Lastname CHAR(20) NOT NULL,
--     Address CHAR(30) NOT NULL,
--     Zipcode INTEGER NOT NULL,
--     Areacode INTEGER NOT NULL,
--     PhoneNumber CHAR(15) NOT NULL
-- )

-- SELECT Lastname + ' ' + Firstname + ' ' + PhoneNumber AS NamesAndAreacodes
-- FROM Committee2

-- 4.3 CREAETING AN Alias
-- SELECT Firstname, Lastname, Address AS "HomeAddress"
-- FROM Committee2

-- 4.4 THE DISTINCT KEYWORD 
-- SELECT DISTINCT Price
-- FROM Toys

-- SELECT MAX(Price)
-- FROM Toys
-- WHERE Price < ( SELECT MAX(Price) FROM Toys)

SELECT *
FROM Toys
WHERE ToyName <> 'ToyTrain1' AND ToyName <> 'ToyTrain2'
