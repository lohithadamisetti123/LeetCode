# Write your MySQL query statement below
with ans as (
    select requester_id as id from RequestAccepted 
    union all
    select accepter_id as id  from RequestAccepted 
)
select id,count(id) as num from ans group by id
order by num desc
limit 1