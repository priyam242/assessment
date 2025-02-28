 -- Lab 1: Create a new database named school_db and a table called students with the
-- following columns: student_id, student_name, age, class, and address.

create schema school_db;
use school_db;

create table students
(student_id int not null,
student_name varchar(25) not null,
age int not null,
class varchar(25) not null,
address varchar(250) not null,
teacher_id int primary key
);

insert into students values(1,'priyam',15,'8th','119,nirmal park society',1),(2,'shubham',15,'8th','120,nirmal park society',2),
(3,'priyanshu',15,'8th','154,nirmal park society',3),(4,'ashish',15,'8th','254,nirmal park society',4),
(5,'alfred',15,'8th','145,nirmal park society',5);
drop table students;
drop schema school_db;