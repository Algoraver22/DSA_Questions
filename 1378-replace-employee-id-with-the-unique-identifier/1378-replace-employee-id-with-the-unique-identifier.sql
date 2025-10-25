# Write your MySQL query statement below
select e.name , eu.unique_id from Employees as e left join EmployeeUNI as eu on e.id = eu.id
-- SELECT e.name, eu.unique_id
-- FROM Employees e
-- LEFT JOIN EmployeeUNI eu
-- ON e.id = eu.id;
