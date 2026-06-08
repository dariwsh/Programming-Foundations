# 📝 نوتة سريعة - HAVING

## الفكرة ببساطة

`WHERE` بتفلتر **الصفوف** (قبل التجميع)
`HAVING` بتفلتر **المجموعات** (بعد التجميع)

> يعني: WHERE مع البيانات العادية، HAVING مع COUNT و SUM و AVG وكده

## الترتيب

```
SELECT → FROM → WHERE → GROUP BY → HAVING → ORDER BY
```

## مثال سريع

```sql
-- هات الأقسام اللي فيها أكتر من 5 موظفين
SELECT DepartmentID, COUNT(*) 
FROM Employees
GROUP BY DepartmentID
HAVING COUNT(*) > 5;
```

## خلّي بالك 🔴

- لو تقدر تفلتر بـ `WHERE` فلتر بيها - أسرع
- `HAVING` بس لما تحتاج تفلتر على نتيجة دالة تجميع (aggregate)
