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

-- SELECT *
-- FROM Committee2

SELECT Lastname + ' ' + Firstname + ' ' + PhoneNumber AS NamesAndAreacodes
FROM Committee2