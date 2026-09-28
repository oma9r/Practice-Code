--create table student(
--
--	student_id integer primary key,
--	name varchar NOT NULL,
--	email varchar,
--	gpa numeric(3,2),
--	graduation_year integer
--);

--create table club(
--
--	club_id integer primary key,
--	name varchar NOT NULL,
--	category varchar,
--	budget numeric(4,2),
--	founded_year integer
--);

create table membership(

	student_id integer,
	club_id integer,
	role varchar,
	join_year varchar,

	primary key (student_id, club_id),
	foreign key (club_id) references club(club_id)

);

create table event (

	event_id integer primary key,
	club_id integer,
	name varchar NOT NULL,
	event_date date,
	location varchar,
	cost numeric(4,2),

	foreign key(club_id) references club(club_id)
);

create table club_notes (

	note_id integer primary key,
	club_id integer,
	note varchar,

	foreign key(club_id) references club(club_id)
);




