# Write your MySQL query statement below
select p.lastName,p.firstName,a.city,a.state
from Person as p
left join Address as a
ON p.personId = a.personId;
