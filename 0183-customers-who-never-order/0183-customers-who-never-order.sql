# Write your MySQL query statement below
select name as Customers from Customers
where customers.id not in(select customerId from orders); 