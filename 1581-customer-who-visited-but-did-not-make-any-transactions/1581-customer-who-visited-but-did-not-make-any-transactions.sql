# Write your MySQL query statement below
-- select v.customer_id, count(*) as count from Visits as v left join Transactions as t on v.visit_id = t.visit_id where t.transition_id as null group by v.customer_id
SELECT v.customer_id, COUNT(*) AS count_no_trans
FROM Visits AS v
LEFT JOIN Transactions AS t
ON v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY v.customer_id;
