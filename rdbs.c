create table student(rollno number(5) primary key,name varchar(20) NOT NULL,age number(2),bname varchar(5),per number(5,2),email varchar(30) unique);
alter table student add gender number(6);
insert into student values(543,'manoj',19,'cse',80.6,'manoj@2123gmail.com','male');
insert into student values(544,'satya',19,'cse',82.6,'satyadengersmily@2123gmail.com','male');
insert into student values(545,'surya',18,'cse',85.6,'surya@2123gmail.com','male');
insert into student values(546,'teja',19,'cse',83.6,'teja@2123gmail.com','male');
insert into student values(547,'nitcal',19,'cse',81.8,'nitcal@2123gmail.com','male');
insert into student values(548,'vinay',18,'cse',90.6,'vinay@2123gmail.com','male');
insert into student values(549,'naga babu',18,'cse',87.5,'nagababu@2123gmail.com','male');
insert into student values(550,'karthik',19,'cse',86.1,'karthik@2123gmail.com','male');
insert into student values(551,'vivek',18,'cse',89.3,'vivek@2123gmail.com','male');
select *from student;
alter table student drop gender;
select *from student;
