# Write your MySQL query statement below
select y.id from Weather x 
inner join Weather y 
on datediff(y.recordDate,x.recordDate)=1
and x.Temperature < y.Temperature;