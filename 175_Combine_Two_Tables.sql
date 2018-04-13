# Write your MySQL query statement below
SELECT Person.PersonId, Person.FirstName, Address.City, Address.State from Person LEFT JOIN Address on Person.PersonId = Address.PersonId;
