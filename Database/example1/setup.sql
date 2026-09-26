create table students (

	id integer primary key,
	name varchar(20),
	major varchar(20)

);

insert into students values (1,'Omar','CE'),(2,'Ahmad','CS'),(3,'Sara','CE');

select *
from students;