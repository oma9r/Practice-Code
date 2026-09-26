create table student(

	student_id integer primary key,
	name varchar NOT NULL,
	email varchar,
	gpa numeric(3,2),
	graduation_year integer
);

create table club(

	club_id integer primary key,
	name varchar NOT NULL,
	category varchar,
	budget numeric(4,2),
	founded_year integer
);

create table membership(

	student_id integer,
	club_id intger,
	role varchar,
	join_year varchar,

	primary key (student_id, club_id),
	foreign key (club_id) references club(club_id)

);

create table event

