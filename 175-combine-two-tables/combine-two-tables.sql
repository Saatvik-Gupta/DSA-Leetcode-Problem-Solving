# Write your MySQL query statement below



SELECT firstName,lastName,city,state from person p
Left outer Join
Address a on p.personId=a.personId;