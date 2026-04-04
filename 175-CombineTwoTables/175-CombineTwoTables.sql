-- Last updated: 4/4/2026, 11:06:11 PM
# Write your MySQL query statement below
select firstName,lastName,city,state
from Person
left join Address 
on Person.personId=Address.personID