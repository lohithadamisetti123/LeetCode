# Write your MySQL query statement below
select e.name as employee,e.salary , d.name as department 
from employee e join department d on e.departmentid =d.id WHERE e.salary = (
    SELECT MAX(e2.salary) 
    FROM employee e2 
    WHERE e2.departmentid = e.departmentid
);