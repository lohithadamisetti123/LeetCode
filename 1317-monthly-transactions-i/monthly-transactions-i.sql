# Write your MySQL query statement below
select DATE_FORMAT(trans_date, '%Y-%m') as month,country,
count(*) as trans_count ,SUM(state = 'approved')as approved_count,
sum(amount) as trans_total_amount ,sum(CASE WHEN state = 'approved' THEN amount else 0 END) as approved_total_amount
from transactions group by DATE_FORMAT(trans_date, '%Y-%m'),country;