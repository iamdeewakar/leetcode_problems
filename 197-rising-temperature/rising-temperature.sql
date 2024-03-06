# Write your MySQL query statement below
select y.id from Weather x 
Left join Weather y 
on datediff(y.recordDate,x.recordDate)=1 
where x.Temperature < y.Temperature;